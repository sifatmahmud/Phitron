#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{

    char s[100];
    // fgets(s, 100, stdin);
    int a;
    cin >> a;
    getchar();
    cin.getline(s, 100);
    cout << a << endl
         << s << endl;

    return 0;
}