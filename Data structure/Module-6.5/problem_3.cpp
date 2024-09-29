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
// ------------------------------------------
int main()
{
    Node *head = NULL;
    int count = 0;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, val);
        count++;
    }

    Node *temp = head;
    if (count % 2 != 0)
    {
        for (int i = 0; i < (count - 1) / 2; i++)
        {
            temp = temp->next;
        }
        cout << temp->val;
    }
    else if (count % 2 == 0)
    {
        for (int i = 0; i < (count / 2) - 1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val;
    }

    return 0;
}