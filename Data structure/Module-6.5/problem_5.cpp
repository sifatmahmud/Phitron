// #include <bits/stdc++.h>
// using namespace std;
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
// // ----------------------------------------------
// void insert_at_tail(Node *&head, int val)
// {
//     Node *newNode = new Node(val);

//     if (head == NULL)
//     {
//         head = newNode;
//         return;
//     }

//     Node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }
// int main()
// {
//     Node *head = NULL; // initialization
//     while (true)       // input linked list
//     {
//         int val;
//         cin >> val;
//         if (val == -1)
//         {
//             break;
//         }
//         insert_at_tail(head, val);
//     }

//     Node *temp = head;
//     bool flag = true;
//     while (temp->next != NULL)
//     {
//         if (temp->val > temp->next->val)
//         {
//             flag = false;
//         }
//     }

//     if (flag)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

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

int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, val);
    }

    Node *temp = head;
    bool flag = true;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->val > temp->next->val)
        {
            flag = false;
            break;
        }
        temp = temp->next;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
