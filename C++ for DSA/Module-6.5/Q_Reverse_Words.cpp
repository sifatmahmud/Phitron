#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;

    int cnt = 0;

    while (ss >> word)
    {

        cnt++;
    }

    stringstream ss2(s);
    string word2;

    int cnt2 = 0;
    while (ss2 >> word2)
    {

        for (auto it = word2.end() - 1; it >= word2.begin(); it--)
        {

            cout << *it;
        }
        cnt2++;
        if (cnt2 != cnt)
        {
            cout << " ";
        }
    }

    return 0;
}