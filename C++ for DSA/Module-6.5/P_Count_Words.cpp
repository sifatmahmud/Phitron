#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s;
    // getline(cin, s);
    // stringstream ss(s);
    // string word;

    // int cnt = 0;
    // while (ss >> word)
    // {
    //     int flag = 0;
    //     for (int i = 0; i < word.size(); i++)
    //     {
    //         if ((word[i] >= 97 && word[i] <= 122) || (word[i] >= 65 && word[i] <= 90))
    //         {
    //             flag = 1;
    //         }
    //     }
    //     if (flag)
    //     {
    //         cnt++;
    //     }
    // }
    // cout << cnt;

    // -------------------------------------

    string s;
    getline(cin, s);
    bool inside_word = false;
    int cnt = 0;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (inside_word == false)
                cnt++;
            inside_word = true;
        }
        else
        {
            inside_word = false;
        }
    }
    cout << cnt << endl;

    return 0;
}