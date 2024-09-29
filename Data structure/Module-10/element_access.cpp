#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {20, 40, 30, 10, 50, 10, 10};
    // cout << mylist.front() << endl;
    // cout << mylist.back() << endl;
    cout << *next(mylist.begin(), 3) << endl;

    return 0;
}