#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void sort_list(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    // --------- while loop ----------
    Node *i = head;
    while (i->next != NULL)
    {
        Node *j = i->next;
        while (j != NULL)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
            j = j->next;
        }
        i = i->next;
    }
    // ----------- for loop ---------

    // for (Node *i = head; i->next != NULL; i = i->next)
    // {
    //     for (Node *j = i->next; j != NULL; j = j->next)
    //     {
    //         if (i->val > j->val)
    //         {
    //             swap(i->val, j->val);
    //         }
    //     }
    // }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    sort_list(head);
    print_normal(head);
    return 0;
}