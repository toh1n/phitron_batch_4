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

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{

    int val;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head1, tail1, val);
    }

    Node *tmp1, *tmp2, *dup;

    tmp1 = head1;

    while (tmp1 != NULL)
    {
        tmp2 = tmp1;
        while (tmp2->next != NULL)
        {
            if (tmp1->val == tmp2->next->val)
            {
                dup = tmp2->next;
                tmp2->next = tmp2->next->next;
                delete dup;
            }
            else
            {
                tmp2 = tmp2->next;
            }
        }
        tmp1 = tmp1->next;
    }

    print_linked_list(head1);

    return 0;
}