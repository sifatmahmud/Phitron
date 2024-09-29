#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 1, 2, 4, 5, 3, 2};
    // vector<int>::iterator it;

    // it = find(v.begin(), v.end(), 3);
    auto it = find(v.begin(), v.end(), 100);

    if (it == v.end())
        cout << "Not found";
    else
        cout << "Found";

    return 0;
}