
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int cnt = 0;
    void push(int val)
    {
        cnt++;
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
    void pop()
    {
        cnt--;
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    int top()
    {
        return tail->val;
    }
    int size_stack()
    {
        return cnt;
    }
    bool empty()
    {
        if (cnt > 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

int main()
{
    myStack st1;
    int x1;
    cin >> x1;
    for (int i = 1; i <= x1; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }

    myStack st2;
    int x2;
    cin >> x2;
    for (int i = 1; i <= x2; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    if (st1.size_stack() != st2.size_stack())
    {
        cout << "NO" << endl;
        return 0;
    }

    bool flag = true;
    while (!st1.empty())
    {
        int rmVal = st1.top();
        int rmVal2 = st2.top();
        st1.pop();
        st2.pop();
        if (rmVal != rmVal2)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}