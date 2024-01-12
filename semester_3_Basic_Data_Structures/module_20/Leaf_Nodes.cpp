#include <iostream>
#include <queue>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    Node *root;
    int val;
    cin >> val;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);
        p->left = left;
        p->right = right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void printLeafNodes(Node *root)
{
    if (root == NULL)
        return;

    if (root != NULL && (root->left == NULL && root->right == NULL))
    {
        cout << root->val << " ";
    }
    // cout << root->val << " ";

    printLeafNodes(root->right);
    printLeafNodes(root->left);
}

void levelorder(Node* root){

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        //1. ber kore ana
        Node* f = q.front();
        q.pop();

        //2. jabotiyo kaj
        cout << f->val << " ";

        //3. tar children gulo ke rakha
        
        if(f->right) q.push(f->right);
        if(f->left) q.push(f->left);
    }
    
}

int main()
{
    Node *root = input_tree();
    printLeafNodes(root);

    return 0;
}
