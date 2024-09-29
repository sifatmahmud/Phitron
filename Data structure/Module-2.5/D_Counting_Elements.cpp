#include <bits/stdc++.h>
using namespace std;

int main()
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
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (a[i] + 1 == a[j])
            {
                cnt++;
                break;
            }
        }
    }

    // printing section
    cout << cnt;

    return 0;
}