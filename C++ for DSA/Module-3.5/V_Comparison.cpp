#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    if (s == 60)
    {
        if (a < b == 1)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else if (s == 62)
    {
        if (a > b == 1)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else
    {
        if ((a == b) == 1)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }

    return 0;
}