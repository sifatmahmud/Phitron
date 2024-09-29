#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int> c(b);

    for (int i = 0; i < a.size(); i++)
    {
        c.push_back(a[i]);
    }

    for (int val : c)
        cout << val << " ";

    return 0;
}