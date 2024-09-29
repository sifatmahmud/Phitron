#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool vis[N];
bool path_vis[N];

vector<int> adj[N];

bool ans;

void dfs(int parent)
{
    vis[parent] = true;
    path_vis[parent] = true;

    cout << parent << endl;
    for (int child : adj[parent])
    {
        if (path_vis[child])
        {
            ans = true;
        }
        if (vis[child] == false)
        {
            dfs(child);
        }
    }

    // kaj sesh
    path_vis[parent] = false;
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));
    memset(path_vis, false, sizeof(path_vis));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    if (ans)
        cout << "Cycle found";
    else
        cout << "Cycle not fount";

    return 0;
}