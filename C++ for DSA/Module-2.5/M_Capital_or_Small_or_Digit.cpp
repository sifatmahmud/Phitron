#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;
    int capital_count = 0;
    int small_count = 0;
    int digit_count = 0;

    if (x >= 48 && x <= 57)
    {
        digit_count++;
    }

    else if (x >= 97 && x <= 122)
    {
        small_count++;
    }
    else if (x <= 65 && x <= 90)
    {
        capital_count++;
    }
    // ------- cheque -----------
    if (capital_count == 1)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }
    else if (small_count == 1)
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }
    else if (digit_count == 1)
    {
        cout << "IS DIGIT";
    }

    return 0;
}