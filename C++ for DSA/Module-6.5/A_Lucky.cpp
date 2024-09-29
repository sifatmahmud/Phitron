#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        string s;
        cin >> s;
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < 3; i++)
        {
            sum1 = sum1 + (int)s[i];
        }
        for (int i = 3; i < 6; i++)
        {
            sum2 = sum2 + (int)s[i];
        }

        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}