#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // working section
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int flag = 0;
        if (n % 2 != 0)
        {
            for (int j = 0; j <= (n / 2) + 1; j++)
            {
                if (a[j] == x)
                {
                    flag = 1;
                }
            }
        }
        else if (n % 2 == 0)
        {
            for (int j = 0; j <= n / 2; j++)
            {
                if (a[j] == x)
                {
                    flag = 1;
                }
            }
        }

        // printing section
        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}