#include <bits/stdc++.h>
using namespace std;

bool vis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;
char a[1005][1005];

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == '#')
        return false;
    else
        return true;
}

int cnt = 0;

bool rooms = false;

void dfs(int si, int sj)
{

    cnt++;
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

    memset(vis, false, sizeof(vis));

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (a[i][j] == '.' && vis[i][j] == false)
            {
                rooms = true;
                cnt = 0;
                dfs(i, j);
                v.push_back(cnt);
            }
        }
    }

    if (rooms)
    {
        sort(v.begin(), v.end());

        int v_size = v.size();

        for (int i = 0; i < v_size; i++)
        {
            cout << v[i] << " ";
        }
    }
    else
    {
        cout << 0;
    }

    return 0;
}