#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
bool vis[N][N];
vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
map<pair<int, int>, pair<int, int>> par;

int n, m;

char graph[N][N];

bool valid(int ci, int cj)
{

    if (ci >= 0 && ci < n && cj >= 0 && cj < m)
    {
        return true;
    }
    else
        return false;
}

void bfs(int si, int sj)
{
    vis[si][sj] = true;

    queue<pair<int, int>> q;
    q.push({si, sj});

    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = node.first + d[i].first;
            int cj = node.second + d[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && graph[ci][cj] != '#')
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
                par[{ci, cj}] = {node.first, node.second};
            }
        }
    }
}

int main()
{

    cin >> n >> m;

    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
        }
    }

    pair<int, int> src;
    pair<int, int> des;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (graph[i][j] == 'D')
            {
                src.first = i;
                src.second = j;
            }
            if (graph[i][j] == 'R')
            {
                des.first = i;
                des.second = j;
            }
        }
    }

    bfs(src.first, src.second);

    if (vis[des.first][des.second])
    {
        int xi = des.first;
        int xj = des.second;
        while (true)
        {
            int newXi = par[{xi, xj}].first;
            int newXj = par[{xi, xj}].second;
            xi = newXi;
            xj = newXj;
            if (graph[xi][xj] == 'D')
            {
                break;
            }
            graph[xi][xj] = 'X';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << graph[i][j];
        }
        cout << endl;
    }
}