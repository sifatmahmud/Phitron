#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        // input section
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // working section
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            // if (a[i] == a[n - 1])
            // {
            //     continue;
            // }

            if (a[i] > a[i + 1])
                flag = false;
        }
        // printing section
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // input section
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     // working section
//     bool flag = true;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > a[i + 1])
//             flag = false;
//     }
//     // printing section
//     if (flag)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;

//     return 0;
// }