#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {10, 20, 30, 40, 50};
    list<int> newlist = {100, 200};
    // mylist.pop_back();
    // mylist.pop_back();
    // mylist.pop_front();
    // mylist.insert(next(mylist.begin(), 4), 100);
    // mylist.insert(next(mylist.begin(), 3), {100, 200, 300});
    // mylist.insert(next(mylist.begin(), 3), newlist.begin(), newlist.end());
    // mylist.erase(next(mylist.begin(), 2));
    // mylist.erase(next(mylist.begin(), 2), next(mylist.begin(), 5));
    // replace(mylist.begin(), mylist.end(), 30, 500);

    // for (int val : mylist)
    //     cout << val << endl;

    auto it = find(mylist.begin(), mylist.end(), 40);
    if (it == mylist.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }

    return 0;
}