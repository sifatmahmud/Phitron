#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // EOF
    // int a, b;
    // while (cin >> a >> b)
    // {
    //     cout << a << " " << b << endl;
    // }

    // setprecision
    double a;
    cin >> a;
    cout << a << endl;
    cout << fixed << setprecision(2) << a << endl;

    return 0;
}