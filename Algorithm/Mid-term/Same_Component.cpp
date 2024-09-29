#include <bits/stdc++.h>
using namespace std;

bool vis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;
char a[1005][1005];

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == '-')
        return false;
    else
        return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && !vis[ci][cj])
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    pair<int, int> A_index;
    pair<int, int> B_index;

    cin >> A_index.first >> A_index.second;
    cin >> B_index.first >> B_index.second;

    memset(vis, false, sizeof(vis));

    dfs(A_index.first, A_index.second);

    if (vis[B_index.first][B_index.second])
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}