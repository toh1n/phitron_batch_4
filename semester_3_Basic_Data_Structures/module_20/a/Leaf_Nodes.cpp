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

void levelorder(Node *root)
{

    queue<Node *> q;
    q.push(root);
    vector<int> s;

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        if (f->left == NULL && f->right == NULL)
        {
            s.push_back(f->val);
        }
        if (f->right)
            q.push(f->right);
        if (f->left)
            q.push(f->left);
    }

    sort(s.begin(), s.end(), greater<int>());
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
}
int main()
{
    Node *root = input_tree();
    levelorder(root);

    return 0;
}
