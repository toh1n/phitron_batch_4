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
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
        
    }
    
}
Node* input_tree(){


    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        //1. ber kore ana
        Node* p = q.front();
        q.pop();

        //2. jabotiyo kaj
        int l,r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if(l == -1) left = NULL;
        else left = new Node(l);
        if(r == -1) right = NULL;
        else right = new Node(r);

        p->left = left;
        p->right = right;
        //3. tar children gulo ke push koro queue te

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }
    return root;
}

int count(Node* root){

    if(root == NULL){
        return 0;
    }
    int l = count(root->left);
    int r = count(root->right);
    return l+r+1;

}

int count_leaf(Node* root){

    if(root == NULL) return 0;

    if(root->left == NULL && root->right == NULL) return 1;
    else{
        int l = count_leaf(root->left);
        int r = count(root->right);
        return l+r;
    }
}

int main(){

    Node* root = input_tree();
    int n = count_leaf(root);

    cout << n;

    return 0;
}