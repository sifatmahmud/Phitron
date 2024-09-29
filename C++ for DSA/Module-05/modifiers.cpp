#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string a = "Hello";
    // string b = "World";
    // a = a + b; // Important
    // a.append(b);
    // cout << a << endl;
    // cout << b << endl;

    // a[5] = 'A'; // didn't work;
    // a = a + 'A'; // work

    // a.push_back('A'); // works
    // cout << a << endl;
    // a.pop_back();
    // cout << a << endl;
    // a.pop_back();
    // cout << a << endl;

    // ------------------------------------

    string a = "HelloWorld";
    // a.erase(4);
    // a.erase(4, 3);
    // a.replace(4, 3, "so");
    // a.replace(4, 0, "so");

    // a.replace(5, 0, "so");
    a.insert(5, "Rifat");

    cout << a << endl;
    return 0;
}