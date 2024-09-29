#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, t;
    cin >> x >> y >> t;
    if (t >= x + y)
    {
        if (x * y < t)
        {
            cout << "YES";
        }
    }
    else
    {
        cout << "NO";
    }

    return 0;
}