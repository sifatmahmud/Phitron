#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// ------------- depth order ------------------
void pre_order(Node *root)
{

    // base case
    if (root == NULL)
        return;

    cout << root->val << " ";
    pre_order(root->left);
    pre_order(root->right);
}

void post_order(Node *root)
{

    // base case
    if (root == NULL)
        return;

    post_order(root->left);
    post_order(root->right);
    cout << root->val << " ";
}

void in_order(Node *root)
{

    // base case
    if (root == NULL)
        return;

    in_order(root->left);
    cout << root->val << " ";
    in_order(root->right);
}

// --------------------- level order ----------------------
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1 - ber kore ana
        Node *f = q.front();
        q.pop();

        // 2 - jabotiyo kaj
        cout << f->val << " ";

        // 3 - tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    // connection
    root->left = a;
    root->right = b;

    a->left = c;
    a->right = h;

    c->right = e;

    b->right = d;

    d->left = f;
    d->right = g;

    h->right = i;

    level_order(root);

    return 0;
}