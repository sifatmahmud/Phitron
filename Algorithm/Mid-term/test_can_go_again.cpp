#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n][n];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = 1e18;
            if (i == j)
                adj[i][j] = 0;
        }
    }

    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = c;
    }

    // algorithm
    for (int k = 1; k <= n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    int s;
    cin >> s;

    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        // printing
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][j] == 1e18)
                {
                    cout << "Not Possible" << endl;
                }

                else
                    cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Cycle detection
    for (int i = 0; i < n; i++)
    {
        if (adj[i][i] < 0)
        {
            cout << "Cycle Detected" << endl;
            break;
        }
    }

    return 0;
}