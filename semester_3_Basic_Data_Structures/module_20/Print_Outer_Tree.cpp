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
Node* input_tree(){
    Node* root;
    int val;
    cin >> val;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        Node* left;
        Node* right;
        if(l == -1) left = NULL;
        else left = new Node(l);
        if(r == -1) right = NULL;
        else right = new Node(r);
        p->left = left;
        p->right = right;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }
    return root;
}

void print_left(Node* root){
    if(root == NULL) return;
    if(root->left) print_left(root->left);
    else if (root->right) print_left(root->right);
    cout << root->val << " ";
}
void print_right(Node* root){
    if(root == NULL) return;
    cout << root->val << " ";
    if(root->right) print_right(root->right);
    else if (root->left) print_right(root->left);
}

int main(){

    Node* root = input_tree();
    if(root->left) print_left(root->left);
    cout << root->val <<  " ";
    if(root->right) print_right(root->right);
    return 0;
}