// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // input section
//     int n;
//     cin >> n;
//     vector<long long int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     // working section
//     sort(a.begin(), a.end());

//     bool flag = false;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == a[i + 1])
//         {
//             flag = true;
//         }
//     }

//     // printing section
//     if (flag)
//         cout << "YES";
//     else
//         cout << "NO";

//     return 0;
// }
// --------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input section
    int n;
    cin >> n;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // working section
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                flag = true;
            }
        }
    }

    // printing section
    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}