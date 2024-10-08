#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
bool subset_sum(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0)
            return true;
        else
            return false;
    }

    if (dp[n][s] != -1)
        return dp[n][s];

    if (a[n - 1] <= s)
    {

        bool op1 = subset_sum(n - 1, a, s - a[n - 1]);
        bool op2 = subset_sum(n - 1, a, s);
        return dp[n][s] = op1 || op2;
    }
    else
    {

        return dp[n][s] = subset_sum(n - 1, a, s);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        memset(dp, -1, sizeof(dp));

        if (m == 1000)
            cout << "YES" << endl;
        else if (m < 1000)
        {
            int val = 1000 - m;

            if (subset_sum(n, a, val))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
