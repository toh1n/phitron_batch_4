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

int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}

void nodeLevelPrint(Node *root, int level)
{
    // Write your code here.
    queue<pair<Node*, int>> q;
    // q.push(make_pair(root,1));
    q.push({root, 1});
    while (!q.empty())
    {
        pair<Node*, int> pr = q.front();
        Node *node = pr.first;
        int level = pr.second;
        q.pop();

        if (node->val == level)
        {
            
        }
        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
}

int main()
{
    Node *root = input_tree();

    int x;
    cin >> x;

    if( x > maxHeight(root)){
        cout << "Invalid" << endl;
    }

    return 0;
}
