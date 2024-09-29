#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // sorting
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[j] < a[i])
            {
                // swap(a[i], a[j]);
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    // printing
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}