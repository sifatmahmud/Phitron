#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, q;
    cin >> n >> q;

    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < q; i++)
    {
        long long int l, r;
        cin >> l >> r;
        long long int sum = 0;
        for (int i = l - 1; i < r; i++)
        {
            sum = sum + a[i];
        }
        cout << sum << endl;
    }

    return 0;
}