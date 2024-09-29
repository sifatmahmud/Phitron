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
        char s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        int frq[26] = {0};

        for (int i = 0; i < n; i++)
        {
            if (frq[s[i] - 'A'] == 0)
            {
                frq[s[i] - 'A'] += 2;
            }
            else
            {
                frq[s[i] - 'A'] += 1;
            }
        }

        int sum = 0;
        for (int i = 0; i < 26; i++)
        {
            sum = sum + frq[i];
        }

        cout << sum << endl;
    }

    return 0;
}