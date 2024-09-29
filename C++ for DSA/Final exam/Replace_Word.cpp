
#include <bits/stdc++.h>
using namespace std;
void fun(string s, int n, string x)
{
    // base case
    if (n < 0)
    {
        cout << s << endl;
        return;
    }
    s.replace(n, x.length(), "#");
    n = s.find(x);
    fun(s, n, x);
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;
        int n = s.find(x);
        fun(s, n, x);
    }

    return 0;
}