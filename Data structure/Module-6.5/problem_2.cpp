#include <bits/stdc++.h>
using namespace std;
// --------------------------------------------------
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
// -------------------------------------------
int dupli_or_not(Node *head)
{
    Node *temp = head;
    bool flag = false;
    while (temp->next != NULL)
    {
        Node *temp2 = temp->next;
        while (temp2 != NULL)
        {
            if (temp->val == temp2->val)
            {
                flag = true;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    // ---------- return area --------------
    if (flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// -------------------------------------------
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
    int dupli = dupli_or_not(head);
    if (dupli)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}