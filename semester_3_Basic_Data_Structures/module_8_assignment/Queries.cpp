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
void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insert_tail(Node *&head, Node *&tail, int val)
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

void delete_node(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void delete_tail(Node *head, Node *&tail)
{
    Node *tmp = head;
    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }

    Node *deleteNode = tmp->next;
    tmp->next = NULL;
    tail = tmp;
    delete deleteNode;
}

int main()
{

    int q;
    cin >> q;
    Node *head = NULL;
    Node *tail = NULL;
    while (q > 0)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            if (head == NULL)
            {
                insert_tail(head, tail, v);
            }
            else
            {
                insert_head(head, v);
            }
        }
        else if (x == 1)
        {
            insert_tail(head, tail, v);
        }
        else
        {
            if (v < size(head))
            {
                if (v == 0)
                {
                    delete_head(head);
                }
                else if (v == size(head) - 1)
                {
                    delete_tail(head, tail);
                }
                else
                {
                    delete_node(head, v);
                }
            }
        }
        print_linekd_list(head);
        q--;
    }
}