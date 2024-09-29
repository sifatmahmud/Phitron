#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a[3]={10,20,30};
    int *a = new int[3];
    int *b = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    delete[] a;
    a = new int[5];
    // a[] to b[]
    for (int i = 0; i < 3; i++)
    {
        a[i] == b[i];
    }
    delete[] b;

    // printing a[]
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}