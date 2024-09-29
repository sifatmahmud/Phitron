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
// -----------------------------------------------------

// ============ main function ==============
int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
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
        int x;
        cin >> x;

        // working section

        vector<int> temp;
        for (Node *i = head; i != NULL; i = i->next)
        {
            temp.push_back(i->val);
        }

        bool flag = false;
        int index = 0;
        for (Node *i = head; i != NULL; i = i->next)
        {
            if (i->val == x)
            {
                flag = true;
                break;
            }
            index++;
        }

        // printing section
        if (flag)
        {
            cout << index << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}