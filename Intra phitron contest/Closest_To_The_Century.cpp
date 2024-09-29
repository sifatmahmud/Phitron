#include <iostream>

#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        // input section
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // working section
        int mx = INT_MIN;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mx = max(a[i], a[j]);
            }
        }

        // printing section
        cout << mx << endl;
    }

    return 0;
}