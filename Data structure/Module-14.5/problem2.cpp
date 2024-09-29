#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    queue<int> q;
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (st.size() != q.size())
    {
        cout << "NO";
        return 0;
    }

    bool flag = true;
    while (!st.empty())
    {
        int rmVal = q.front();
        int rmVal2 = st.top();
        st.pop();
        q.pop();
        if (rmVal != rmVal2)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}