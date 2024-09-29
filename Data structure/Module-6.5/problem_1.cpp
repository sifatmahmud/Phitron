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

// -------------------------- function area -----------------------
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
// ----------------------------------------------------
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
    Node *head = NULL;
    int count = 0;
    while (true)
    {
        int val;
        cout << "Enter the value : ";
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_at_tail(head, val);
        count++;
    }
    cout << count << endl;
    print_list(head);

    return 0;
}