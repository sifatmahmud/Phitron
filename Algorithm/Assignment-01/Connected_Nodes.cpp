#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        vector<int> result;
        int x;
        cin >> x;

        if (!mat[x].size())
        {
            cout << -1 << endl;
        }
        else
        {
            for (int c_node : mat[x])
            {
                result.push_back(c_node);
            }

            sort(result.begin(), result.end(), greater<int>());
            for (int nod : result)
            {
                cout << nod << " ";
            }
            cout << endl;
        }
    }

    return 0;
}