#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    int val;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    Node *tmp = head;
    int min = INT_MAX, max = INT_MIN;
    while (tmp != NULL)
    {

        if (min > tmp->val)
        {
            min = tmp->val;
        }
        if (max < tmp->val)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }

    cout << max - min << endl;

    return 0;
}