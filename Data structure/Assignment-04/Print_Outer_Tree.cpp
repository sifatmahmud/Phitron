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

void print_right(Node *root)
{
    if (root->right)
    {
        cout << root->right->val << " ";
        print_right(root->right);
    }
    else if (root->left)
    {
        cout << root->left->val << " ";
        print_right(root->left);
    }
}
void print_left(Node *root)
{
    if (root->left)
    {
        print_left(root->left);
        cout << root->left->val << " ";
    }
    else if (root->right)
    {
        print_left(root->right);
        cout << root->right->val << " ";
    }
}

void print_outer(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    if (root && (root->left == NULL && root->right == NULL))
    {
        cout << root->val << " ";
        return;
    }

    else if (root && (root->left != NULL && root->right != NULL))
    {
        print_left(root);
        cout << root->val << " ";
        print_right(root);
    }

    else if (root && root->left == NULL)
    {
        cout << root->val << " ";
        print_right(root);
    }

    if (root && root->right == NULL)
    {
        print_left(root);
        cout << root->val << " ";
    }
}

int main()
{
    Node *root = input_tree();
    print_outer(root);

    return 0;
}