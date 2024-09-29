#include <bits/stdc++.h>
using namespace std;
void fun(string s, int n)
{
    // base case
    if (n < 0)
    {
        cout << s;
        return;
    }
    s.replace(n, 5, " ");
    n = s.find("EGYPT");
    fun(s, n);
}
int main()
{
    string s;
    cin >> s;
    int n = s.find("EGYPT");
    fun(s, n);

    return 0;
}