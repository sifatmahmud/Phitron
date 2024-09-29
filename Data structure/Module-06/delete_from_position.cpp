
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
// ------------------ function area ---------------------
void insert_at_tail(Node *&head, int val) // insert at tail er function
{
    Node *newNode = new Node(val); // notun value er node

    // jodi head NULL hoy
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
    cout << endl
         << endl
         << "Inserted at tail" << endl;
}
// --------------------------------
void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << endl
         << "Inserted at postion : " << pos << endl;
}
// --------------------------------
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << endl
         << endl
         << "Inserted at head" << endl;
}
// --------------------------------
void delete_from_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << endl
         << endl
         << "Deleted node at : " << pos << endl;
}
// --------------------------------
void delete_head(Node *&head)
{
    Node *deleteHead = head;
    head = head->next;
    delete deleteHead;
    cout << endl
         << endl
         << "Deleted head" << endl;
}

// ----------------------------------

void print_nodes(Node *head)
{
    cout << "Your list : ";
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
    while (true)
    {
        cout << endl
             << "Option 1 : Insert at tail" << endl;
        cout << "Option 2 : Print nodes" << endl;
        cout << "Option 3 : Insert at position" << endl;
        cout << "Option 4 : Insert at head" << endl;
        cout << "Option 5 : Delete from position" << endl;
        cout << "Option 6 : Delete head" << endl;
        cout << "Option 7 : Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int val;
            cout << "Enter the value : ";
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            print_nodes(head);
        }
        else if (op == 3)
        {
            int pos;
            cout << "Enter the position : ";
            cin >> pos;

            int v;
            cout << "Enter the value : ";
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter the value : ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter position : ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
        cout << "--------------------------";
    }

    return 0;
}
