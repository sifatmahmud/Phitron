#include <iostream>
using namespace std;
int *fun()
{
    int *a = new int;
    cout << "fun : " << a << endl;
    *a = 100;
    cout << "fun : " << &a << endl;
    return a;
}
int main()
{
    // int x = 10;
    // int *a = new int;
    // *a = 10;
    // cout << *a << endl;

    // float *f = new float;
    // *f = 1.53;
    // cout << *f << endl;

    int *p = fun();
    cout << "main : " << *p << endl;
    return 0;
}