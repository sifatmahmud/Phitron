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
// ============ print list function =============
void print_middle(Node *head)
{
    Node *temp = head;
    if (size_list(head) % 2 != 0)
    {
        for (int i = 1; i <= size_list(head) / 2; i++)
        {
            temp = temp->next;
        }
        cout << temp->val;
    }
    else
    {
        for (int i = 1; i < size_list(head) / 2; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val;
    }
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
    print_middle(head);

    return 0;
}