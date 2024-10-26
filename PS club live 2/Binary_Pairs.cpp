// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         char a[n + 5];
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//         }

//         if (n == 1)
//         {
//             cout << 0;
//             return 0;
//         }

//         int cnt = 0;

//         for (int i = 1; i <= n; i++)
//         {
//             if (a[i] == '1' && a[i + 1] == '0')
//             {
//                 cnt++;
//             }
//             else if (a[i] == '0' && a[i + 1] == '1')
//             {
//                 cnt++;
//             }
//         }

//         cout << cnt << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool a[n + 5];

        memset(a, false, sizeof(a));

        for (int i = 1; i <= n; i++)
        {
            char val;
            cin >> val;
            if (val == '1')
            {
                a[i] = true;
            }
            else if (val == '0')
            {
                a[i] = false;
            }
        }

        if (n == 1)
        {
            cout << 0;
            return 0;
        }

        int cnt = 0;

        for (int i = 1; i <= n - 1; i++)
        {
            if (a[i] == true && a[i + 1] == false)
            {
                cnt++;
            }
            else if (a[i] == false && a[i + 1] == true)
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}