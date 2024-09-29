
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
void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insert_tail(Node *&head, int val)
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

void deleteNode(Node *&head, int pos)
{
    Node *temp = head;
    if (pos == 0)
    {
        Node *delNode = head;
        head = delNode->next;
        delete delNode;
        return;
    }
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }

    Node *delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
}

int size_list(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

// ============ print list function =============
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
// -----------------------------------------------------

// ============ main function ==============
int main()
{
    Node *head = NULL; // initialization
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head, v);
        }
        else if (x == 1)
        {
            insert_tail(head, v);
        }
        else if (x == 2)
        {
            if (size_list(head) <= v)
            {
                print_list(head);
                continue;
            }
            else
            {
                deleteNode(head, v);
            }
        }

        print_list(head);
    }

    return 0;
}