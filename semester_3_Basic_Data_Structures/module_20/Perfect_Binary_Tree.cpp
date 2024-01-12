#include <bits/stdc++.h>

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

int count_leaf(Node *root)
{

    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;
    else
    {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l + r;
    }
}

int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}


int main()
{
    Node *root = input_tree();
    int leaf = count_leaf(root);
    int mh = maxHeight(root);
    int m = 1;
    for (int i = 0; i < mh-1; i++)
    {
        m *= 2;
    }
    
    // cout << leaf << " " << mh << " " << m << " " << endl;
     if (m == leaf)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}