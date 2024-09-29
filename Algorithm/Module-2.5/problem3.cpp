#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v[1005];
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int n2;
    cin >> n2;

    cout << v[n2].size();

    return 0;
}