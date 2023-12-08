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
    cout << "Your Linked List: ";
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
    int node1_size = 0;
    int node2_size = 0;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        node1_size++;
        insert_at_tail(head1, tail1, val);
    }

    int v;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        node2_size++;
        insert_at_tail(head2, tail2, v);
    }

    bool flag = true;
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    if (node1_size == node2_size)
    {
        while (tmp1 != NULL)
        {
            if (tmp1->val != tmp2->val)
            {
                flag = false;
            }

            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}