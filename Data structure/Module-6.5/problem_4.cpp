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
// ----------------------------------------------
void insert_at_tail(Node *&head, int val)
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
// ----------------------------------------------
void insert_at_index(Node *&head, int index, int val)
{
    Node *newNode = new Node(val);
    if (head->next == NULL) // jodi head null hoy
    {
        head = newNode;
    }

    if (index == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *temp = head;

    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    // invalid shamlanor jonno
    if (temp == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }
    // ------------------------
    newNode->next = temp->next;
    temp->next = newNode;
}
// ----------------------------------------------
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
        insert_at_tail(head, val);
    }

    int q;
    cin >> q; // input queries
    for (int i = 0; i < q; i++)
    {
        int index, val; // input queries index and val
        cin >> index >> val;
        insert_at_index(head, index, val);

        print_list(head);

        cout << endl;
    }

    return 0;
}