#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int b[n];
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        b[i] = a[j];
        j--;
    }

    bool res = true;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            res = false;
    }

    if (res)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
