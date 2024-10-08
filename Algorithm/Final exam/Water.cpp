#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        ll a2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a2[i] = a[i];
        }

        sort(a, a + n);
        ll first, second;
        for (int i = 0; i < n; i++)
        {
            if (a2[i] == a[n - 1])
                cout << i << " ";
            if (a2[i] == a[n - 2])
                cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}