#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        // -------------------
        if (n % 2 == 0)
        {
            cout << 0 << endl;
            return 0;
        }
        // --------------------
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int jor = 0;
        int bejor = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                jor++;
            }
            else
            {
                bejor++;
            }
        }

        if (jor == n)
        {
            cout << jor / 2 << endl;
        }
        else if (bejor == n)
        {
            cout << bejor / 2 << endl;
        }

        else if (jor > bejor)
        {
            cout << jor - bejor << endl;
        }
        else if (jor < bejor)
        {
            cout << bejor - jor << endl;
        }
    }

    return 0;
}