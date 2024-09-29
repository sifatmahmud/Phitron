#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mini = INT_MAX;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = (a[i - 1] + a[j - 1]) + j - i;
            mini = min(mini, temp);
        }
    }

    cout << mini;

    return 0;
}