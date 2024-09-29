#include <bits/stdc++.h>
using namespace std;

int main()
{
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
    char consonant[21] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    int digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int t;
    cin >> t;
    while (t--)
    {
        int v_cnt = 0;
        int c_cnt = 0;
        int d_cnt = 0;

        string s;
        cin >> s;

        for (char c : s)
        {

            for (int i = 0; i < 10; i++)
            {
                if (c == digits[i])
                    d_cnt++;
            }

            for (int i = 0; i < 5; i++)
            {
                if (c == vowel[i])
                    v_cnt++;
            }
            for (int i = 0; i < 21; i++)
            {
                if (c == consonant[i])
                    c_cnt++;
            }
        }

        if (v_cnt > 0)
        {
            v_cnt = v_cnt / 2;
        }
        if (c_cnt > 0)
        {
            c_cnt = c_cnt / 3;
        }
        cout << v_cnt + c_cnt + d_cnt << endl;
    }

    return 0;
}