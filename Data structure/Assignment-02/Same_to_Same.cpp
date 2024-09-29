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

// -------------------------------------------------------------
// ======== insert at tail function =========

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

// ============ size of list function =============
int size_list(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
// -----------------------------------------------------

// ============ main function ==============
int main()
{
    Node *head1 = NULL; // initialization
    Node *tail1 = NULL;
    while (true) // input linked list
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }

    Node *head2 = NULL; // initialization
    Node *tail2 = NULL;
    while (true) // input linked list
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }

    int size_head1 = size_list(head1);
    int size_head2 = size_list(head2);
    if (size_head1 != size_head2)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        bool flag = true;
        Node *i = head1;
        Node *j = head2;
        while (i != NULL)
        {
            if (i->val != j->val)
            {
                flag = false;
                break;
            }
            i = i->next;
            j = j->next;
        }
        if (flag)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}