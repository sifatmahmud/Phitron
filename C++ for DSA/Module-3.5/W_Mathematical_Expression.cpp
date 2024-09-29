#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if (s == 43)
    {
        if ((a + b == c) == 1)
        {
            cout << "Yes";
        }
        else
        {
            cout << a + b;
        }
    }
    else if (s == 45)
    {
        if ((a - b == c) == 1)
        {
            cout << "Yes";
        }
        else
        {
            cout << a - b;
        }
    }
    else
    {
        if ((a * b == c) == 1)
        {
            cout << "Yes";
        }
        else
        {
            cout << a * b;
        }
    }

    return 0;
}