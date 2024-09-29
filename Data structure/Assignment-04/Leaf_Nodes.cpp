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

vector<int> v;
void print_reverse(Node *root)
{

    // base case
    if (root == NULL)
        return;

    if (root->right == NULL && root->left == NULL)
        v.push_back(root->val);
    print_reverse(root->left);
    print_reverse(root->right);
}

int main()
{
    Node *root = input_tree();
    print_reverse(root);
    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}