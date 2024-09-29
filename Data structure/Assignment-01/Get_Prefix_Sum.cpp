#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input section
    int n;
    cin >> n;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // working section
    vector<long long int> prefix_sum(n);
    prefix_sum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = a[i] + prefix_sum[i - 1];
    }

    // printing section
    for (int i = n - 1; i >= 0; i--)
    {
        cout << prefix_sum[i] << " ";
    }

    return 0;
}