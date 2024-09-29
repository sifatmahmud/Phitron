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
// ======== maximum function =========
int maxi(Node *n)
{
    int mx = INT_MIN;
    for (Node *i = n; i != NULL; i = i->next)
    {
        if (i->val > mx)
        {
            mx = i->val;
        }
    }
    return mx;
}
// ======== minimum function =========
int mini(Node *n)
{
    int min = INT_MAX;
    for (Node *i = n; i != NULL; i = i->next)
    {
        if (i->val < min)
        {
            min = i->val;
        }
    }
    return min;
}
// -----------------------------------------------------

// ============ main function ==============
int main()
{
    Node *head = NULL; // initialization
    Node *tail = NULL;
    while (true) // input linked list
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int max = maxi(head);
    int min = mini(head);
    cout << max - min;

    return 0;
}