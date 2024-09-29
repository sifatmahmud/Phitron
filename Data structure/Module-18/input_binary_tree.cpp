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

void print_level_order(Node *root)
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

Node *input_tree()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1 ber kore ano
        Node *p = q.front();
        q.pop();

        // 2 jabotiyo kaj
        int l, r;
        cin >> l >> r;
        Node *myleft;
        Node *myright;

        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);

        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        // 3 children gulo push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int main()
{
    Node *root = input_tree();
    print_level_order(root);
    return 0;
}