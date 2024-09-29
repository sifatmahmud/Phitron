#include <bits/stdc++.h>
using namespace std;
void print_normal(list<int> mylist)
{

    for (auto it = mylist.begin(); it != mylist.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void print_reverse(list<int> mlist)
{
    mlist.reverse();
    for (auto it = mlist.begin(); it != mlist.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> mylist;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            mylist.push_front(v);
            cout << "L -> ";
            print_normal(mylist);
            cout << "R -> ";
            print_reverse(mylist);
        }
        else if (x == 1)
        {
            mylist.push_back(v);
            cout << "L -> ";
            print_normal(mylist);
            cout << "R -> ";
            print_reverse(mylist);
        }
        else if (x == 2)
        {
            if (v >= mylist.size())
            {
                cout << "L -> ";
                print_normal(mylist);
                cout << "R -> ";
                print_reverse(mylist);
            }
            else
            {
                mylist.erase(next(mylist.begin(), v));
                cout << "L -> ";
                print_normal(mylist);
                cout << "R -> ";
                print_reverse(mylist);
            }
        }
    }

    return 0;
}