// -------- Bruteforce way ----------
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     while (q--)
//     {
//         int x;
//         cin >> x;
//         bool flag = false;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] == x)
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if (flag)
//             cout << "found" << endl;
//         else
//             cout << "not found" << endl;
//     }

//     return 0;
// }

// -------- Binary search way ----------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    while (q--)
    {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0, r = n - 1;
        // binary search
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = true;
                break;
            }
            if (x > a[mid])
            {
                // dane jao
                l = mid + 1;
            }
            else
            {
                // bame jao
                r = mid - 1;
            }
        }
        if (flag)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}

// -------- Classical Binary search ----------
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int x;
//     cin >> x;

//     int l = 0;
//     int r = n - 1;
//     bool flag = false;
//     while (l <= r)
//     {
//         int mid_index = (l + r) / 2;
//         if (a[mid_index] == x)
//         {
//             flag = true;
//             break;
//         }
//         if (x > a[mid_index])
//         {
//             // dane jao
//             l = mid_index + 1;
//         }
//         else
//         {
//             // bame jao
//             r = mid_index - 1;
//         }
//     }
//     if (flag)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;

//     return 0;
// }