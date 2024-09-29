#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // working  section
    vector<int> frq(26);
    for (int i = 0; i < s.size(); i++)
    {
        frq[s[i] - 'a']++;
    }

    // printing section
    char c = 'a';
    for (int i = 0; i < 26; i++)
    {
        if (frq[i] > 0)
        {
            cout << c << " : " << frq[i] << endl;
        }

        c++;
    }

    return 0;
}