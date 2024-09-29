#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input section
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // copying a to b
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    // reverse the array b

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(b[i], b[j]);
        i++;
        j--;
    }

    // compare
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}