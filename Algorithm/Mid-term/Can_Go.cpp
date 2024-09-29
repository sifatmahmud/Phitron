#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N1 = 10000 + 5;
vector<pair<ll, ll>> v[N1];
ll dis[N1];

void dijkstra(int src)
{
    queue<pair<ll, ll>> q;
    q.push({src, 0});
    dis[src] = 0;
    while (!q.empty())
    {
        pair<ll, ll> parent = q.front();
        q.pop();
        ll node = parent.first;
        ll cost = parent.second;

        for (pair<ll, ll> child : v[node])
        {
            ll childNode = child.first;
            ll childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                // path relax
                dis[childNode] = cost + childCost;
                q.push({childNode, dis[childNode]});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = 1e9 + 5;
    }

    int s;
    cin >> s;
    dijkstra(s);

    int t;
    cin >> t;
    while (t--)
    {
        ll d, dw;
        cin >> d >> dw;

        if (dis[d] <= dw)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}