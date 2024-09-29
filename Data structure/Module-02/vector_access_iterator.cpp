#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // vector<int>::iterator it;// auto
    // cout << v[v.size() - 1]; // last value
    // cout << v[0] << endl;
    // cout << v.front() << endl;

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}