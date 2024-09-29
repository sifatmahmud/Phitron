
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        string val;
        cin >> val;
        if (val == "end")
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int q; // queries
    cin >> q;
    Node *temp = head;
    for (int i = 0; i < q; i++)
    {
        // getchar();
        string command;
        cin >> command;

        if (command == "visit")
        {
            string search_val;
            cin >> search_val;
            bool flag = false;
            for (Node *it = head; it != NULL; it = it->next)
            {
                if (it == NULL)
                {
                    cout << "Not Available" << endl;
                    break;
                }
                else if (it->val == search_val)
                {
                    flag = true;
                    temp = it;
                    break;
                }
            }
            if (flag)
            {
                cout << temp->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }

        else if (command == "prev")
        {
            if (temp->prev == NULL)
            {
                cout << "Not Available" << endl;
                continue;
            }
            temp = temp->prev;
            cout << temp->val << endl;
        }

        else if (command == "next")
        {
            if (temp->next == NULL)
            {
                cout << "Not Available" << endl;
                continue;
            }
            temp = temp->next;
            cout << temp->val << endl;
        }
    }

    return 0;
}