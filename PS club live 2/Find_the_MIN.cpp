

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     priority_queue<ll, vector<ll>, greater<ll>> pq;
//     ll q;
//     cin >> q;
//     while (q--)
//     {
//         ll val;
//         cin >> val;
//         if (val == 1)
//         {
//             ll x;
//             cin >> x;
//             pq.push(x);
//         }
//         else if (val == 2)
//         {
//             if (pq.empty())
//             {
//                 cout << "empty" << endl;
//             }
//             else
//             {
//                 cout << pq.top() << endl;
//                 ll cur = pq.top();
//                 while (!pq.empty() && cur == pq.top())
//                 {
//                     pq.pop();
//                 }
//             }
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> v;
    ll q;
    cin >> q;
    while (q--)
    {
        int v_size = v.size();
        ll val;
        cin >> val;
        if (val == 1)
        {
            ll x;
            cin >> x;
            if (v[v_size - 1] > x)
            {
                v.push_back(x);
            }
            else
            {
                ll val2 = v[v_size - 1];
                v.push_back(x);
                v.push_back(val2);
            }
        }
        else if (val == 2)
        {
            if (v.empty())
            {
                cout << "empty" << endl;
            }
            else
            {
                int v_size = v.size();
                ll cur = v[v_size - 1];
                cout << cur << endl;
                while (!v.empty() && cur == v[v_size - 1])
                {
                    v.pop_back();
                }
            }
        }
    }
    return 0;
}