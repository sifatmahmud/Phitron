#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "Hello World";
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;

    // ------------------
    // string a = "ahgoehgoiehiihihge igehgoheh";
    // cout << a.capacity() << endl;
    // a = "ahgfafgegegoegoeogjejgoehgoiehiihihge igehgoheh";
    // cout << a.capacity() << endl;

    // ----------------------
    // string s = "Hello";
    // cout << s << endl;
    // s.clear();
    // cout << s << endl;
    // cout << s.size() << endl;

    // ----------------

    // string s = "Hello";
    // s.clear();
    // if (s.empty() == true)
    // {
    //     cout << "Empty";
    // }
    // else
    // {
    //     cout << "Not Empty";
    // }
    // --------------

    string s;
    cin >> s;
    s.resize(20, 'x');
    cout << s.size() << endl;
    cout << s << endl;
    return 0;
}