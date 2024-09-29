#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
    }

    int q;
    cin >> q;
    while (q--)
    {
        bool result = false;
        int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "YES" << endl;
            continue;
        }

        for (int x : mat[a])
        {
            if (x == b)
                result = true;
        }

        if (result)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}