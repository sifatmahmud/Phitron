// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         getchar();
//         string sentence;
//         getline(cin, sentence);

//         string word;
//         stringstream ss(sentence);
//         map<string, int> mp;

//         int max_count = 0;
//         string s;
//         while (ss >> word)
//         {
//             mp[word]++;
//             if (mp[word] > max_count)
//             {
//                 max_count = mp[word];
//                 s = word;
//             }
//         }

//         for (auto it = mp.begin(); it != mp.end(); it++)
//         {
//             if (max_count == it->second && s == it->first)
//             {
//                 cout << it->first << " " << it->second;
//                 break;
//             }
//         }

//         cout << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         getchar();
//         string sentence;
//         getline(cin, sentence);

//         string word;
//         stringstream ss(sentence);
//         map<string, int> mp;
//         string max_word;

//         int max_count = 0;
//         while (ss >> word)
//         {
//             mp[word]++;
//             if (mp[word] > max_count)
//             {
//                 max_count = mp[word];
//                 max_word = word;
//             }
//         }
//         cout << max_word << " " << max_count;

//         cout << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    for (int i = 0; i < t; i++)
    {
        string sentence;
        getline(cin, sentence);

        string word;
        stringstream ss(sentence);
        map<string, int> mp;
        set<pair<string, int>> s;
        string max_word;

        int max_count = 0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > max_count)
            {
                max_count = mp[word];
                max_word = word;
                s.insert({max_word, max_count});
            }
        }

        for (auto it = s.begin(); it != s.end(); it++)
        {
            if (max_count == it->second)
            {
                cout << it->first << " " << it->second;
            }
        }

        cout << endl;
    }

    return 0;
}
