#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<string> q;

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
        else
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
                continue;
            }
            else
            {
                string remove_val = q.front();
                q.pop();
                cout << remove_val << endl;
            }
        }
    }

    return 0;
}