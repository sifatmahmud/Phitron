#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool result = false;
void reach(ll n, ll val)
{

    if (val > 1e12)
        return;

    if (n == val)
    {
        result = true;
        return;
    }
    reach(n, val * 10);
    reach(n, val * 20);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        reach(n, 1);
        if (result)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
        result = false;
    }
    return 0;
}