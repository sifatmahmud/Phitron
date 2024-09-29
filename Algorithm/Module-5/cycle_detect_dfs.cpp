#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool vis[N];
vector<int> adj[N];
int par_array[N];

bool ans;

void dfs(int parent)
{
    vis[parent] = true;

    // cout << parent << endl;

    for (int child : adj[parent])
    {
        if (vis[child] && child != par_array[parent])
        {
            ans = true;
        }
        if (vis[child] == false)
        {
            par_array[child] = parent;
            dfs(child);
        }
    }
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
        adj[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(par_array, -1, sizeof(par_array));
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