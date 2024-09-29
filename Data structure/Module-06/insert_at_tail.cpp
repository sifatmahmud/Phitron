// #include <bits/stdc++.h>
// using namespace std;
// // -------------- Node class -------------------
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };
// // -------------- Insert function ---------------
// void insert_at_tail(Node *&head, int v)
// {
//     Node *newNode = new Node(v);
//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     Node *tmp = head;
//     while (tmp->next != NULL)
//     {
//         tmp = tmp->next;
//     }
//     // tmp ekhon last node e
//     tmp->next = newNode;
// }
// // ---------- printing Node function ------------
// void print_linked_list(Node *head)
// {
//     cout << "Your Linked list: ";
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }
// // --------------------------------
// int main()
// {
//     Node *head = NULL;
//     while (true)
//     {
//         cout << "Option 1: Insert at Tail" << endl;
//         cout << "Option 2: Print linked list" << endl;
//         cout << "Option 3: Terminate" << endl;
//         int op;
//         cin >> op;
//         if (op == 1)
//         {
//             cout << "Please enter value: ";
//             int val;
//             cin >> val;
//             insert_at_tail(head, val);
//         }
//         else if (op == 2)
//         {
//             print_linked_list(head);
//         }
//         else if (op == 3)
//         {
//             break;
//         }
//     }

//     return 0;
// }

// ------------------------------------

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
}

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
        cout << "Option 1 : insert Node" << endl;
        cout << "Option 2 : Print Nodes" << endl;
        cout << "Option 3 : Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            print_nodes(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}
