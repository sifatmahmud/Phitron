#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // working
    vector<int> prefix_sum(n);
    prefix_sum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }

    for (int i = 1; i < n - 1; i++)
    {
        int left = prefix_sum[i - 1];
        int right = prefix_sum[n - 1] - prefix_sum[i];
        if (left == right)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}