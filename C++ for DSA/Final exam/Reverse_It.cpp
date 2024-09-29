#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char s;
    int id;
};
int main()
{
    // input section
    int n;
    cin >> n;
    Student st[n];
    for (int i = 0; i < n; i++)
    {
        cin >> st[i].name >> st[i].cls >> st[i].s >> st[i].id;
    }

    // working section
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(st[i].s, st[j].s);
        i++;
        j--;
    }

    // printing  section
    for (int i = 0; i < n; i++)
    {
        cout << st[i].name << " " << st[i].cls << " " << st[i].s << " " << st[i].id << endl;
    }
    return 0;
}
