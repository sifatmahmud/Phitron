#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (char &c : s)
    {
        if (isupper(c))
        {
            c = tolower(c);
        }
    }

    stack<char> st;
    for (char c : s)
    {
        st.push(c);
    }

    int st_size = st.size();

    for (int i = 1; i <= st_size; i++)
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}