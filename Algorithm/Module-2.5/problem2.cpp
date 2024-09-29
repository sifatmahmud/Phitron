#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v[1005];
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int l;
    cin >> l;

    bool vis[1005];
    int level[1005];
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    int src = 0;

    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }

    for (int i = n; i >= 0; i--)
    {
        if (level[i] == l)
        {
            cout << i << " ";
        }
    }

    return 0;
}