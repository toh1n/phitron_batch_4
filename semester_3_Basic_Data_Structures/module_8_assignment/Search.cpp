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

    int t;
    cin >> t;
    while (t > 0)
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

        int x;
        cin >> x;
        bool flag = false;
        int pos = 0;
        Node *tmp = head;
        while (tmp != NULL)
        {

            if (tmp->val == x)
            {
                flag = true;
                break;
            }
            pos++;
            tmp = tmp->next;
        }
        if (flag)
        {
            cout << pos << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}