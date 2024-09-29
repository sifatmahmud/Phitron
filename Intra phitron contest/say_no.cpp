#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        // input section
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // sorting section
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        // -----------------
        // printing section - 1
        int flag = 0;
        int cm = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] == cm)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }

        if (flag)
        {
            cout << a[0] << endl;
            continue;
        }

        // printing section - 2
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1])
            {
                continue;
            }
            else
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}