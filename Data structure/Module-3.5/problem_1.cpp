#include <bits/stdc++.h>
using namespace std;
vector<int> fun(vector<int> a, int n)
{
    vector<int> prefix_sum(n);
    prefix_sum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = a[i] + prefix_sum[i - 1];
    }
    return prefix_sum;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // -----------------
    vector<int> prefix_sum = fun(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << prefix_sum[i] << " ";
    }
    return 0;
}