#include <bits/stdc++.h>
using namespace std;

int main()
{
    //  input section
    int n;
    cin >> n;

    // working section
    int left = 0;
    int right = n - 1;

    // 1st ongsho
    for (int i = 0; i < n / 2; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (j == left)
            {
                cout << "\\";
            }
            else if (j == right)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        left++;
        right--;
        cout << endl;
    }

    //  2nd ongsho
    for (int j = 0; j < n; j++)
    {
        if (j == ((n - 1) / 2))
        {
            cout << "X";
        }
        else
        {
            cout << " ";
        }
    }
    cout << endl;

    // 3rd ongsho
    left = ((n - 1) / 2) + 1;
    right = ((n - 1) / 2) - 1;
    for (int i = 0; i < n / 2; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (j == left)
            {
                cout << "\\";
            }
            else if (j == right)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        left++;
        right--;
        cout << endl;
    }

    return 0;
}