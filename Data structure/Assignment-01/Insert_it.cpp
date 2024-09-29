#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input section
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int x;
    cin >> x;

    // working section
    a.insert(a.begin() + x, b.begin(), b.end());

    // printing section
    int size_a = a.size();
    for (int i = 0; i < size_a; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}