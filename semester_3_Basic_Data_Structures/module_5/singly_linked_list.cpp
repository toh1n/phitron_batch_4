#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    Node* head = new Node(0);
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    Node* tmp = head;

    while (tmp->next != NULL)
    {
        cout<< tmp->val << endl;
        tmp = tmp->next;
    }
    

    
}