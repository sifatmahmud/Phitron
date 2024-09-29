#include <bits/stdc++.h>
using namespace std;

double power(double x, double n)
{
    double p = 0;
    if (n == 0)
    {
        return p;
    }
    p = p + power(x, n - 1);
}
double fun(double x, double n)
{
    double s = 0;
    for (int i = 2; i < n; i += 2)
    {
        s = s + power(x, i);
    }
    return s;
}
int main()
{
    double x, n;
    cin >> x >> n;
    double s = fun(x, n);
    cout << int(s);
    return 0;
}