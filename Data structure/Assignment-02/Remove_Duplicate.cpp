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
// ======== insert tail function =========

void insert_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// ============ print list function =============
void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
// -----------------------------------------------------

// ============ main function ==============
int main()
{
    Node *head = NULL; // initialization
    while (true)       // input linked list
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, val);
    }

    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i; j->next != NULL;)
        {
            if (i->val == j->next->val)
            {
                Node *dupli = j->next;
                j->next = j->next->next;
                delete dupli;
            }
            else
            {
                j = j->next;
            }
        }
    }
    print_list(head);

    return 0;
}
