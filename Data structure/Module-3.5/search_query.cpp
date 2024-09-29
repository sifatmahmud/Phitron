#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        bool flag = false;

        // ----------- binary search ----------
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int mid_index = (l + r) / 2;
            if (a[mid_index] == x)
            {
                flag = true;
                break;
            }
            else
            {
                if (x > a[mid_index])
                {
                    // dane jao
                    l = mid_index + 1;
                }
                else
                {
                    // bame jao
                    r = mid_index - 1;
                }
            }
        }
        // -----------------------------
        if (flag)
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