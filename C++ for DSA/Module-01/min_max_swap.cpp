#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // int c = min(a, b);
    // int d = max(a, b);
    // cout << c << endl;
    // cout << d;

    // int mn = min({a, b, c, d});
    // cout << mn;

    swap(a, b);
    cout << a << " " << b;

    return 0;
}