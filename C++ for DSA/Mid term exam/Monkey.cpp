#include <bits/stdc++.h>
using namespace std;

int main()
{

    char s[100005];
    while (cin.getline(s, 100005))
    {
        int size_string = strlen(s);
        sort(s, s + size_string);
        for (int i = 0; i < size_string; i++)
        {
            if (s[i] == 32)
            {
                continue;
            }
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}