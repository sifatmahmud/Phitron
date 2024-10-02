#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
int main()
{
    // input section
    int n;
    cin >> n;
    Student st[n];
    for (int i = 0; i < n; i++)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].math_marks >> st[i].eng_marks;
    }

    // working section
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int total1 = st[i].math_marks + st[i].eng_marks;
            int total2 = st[j].math_marks + st[j].eng_marks;

            if (total1 < total2)
            {
                swap(st[i], st[j]);
            }
            else if (total1 == total2)
            {
                if (st[i].id > st[j].id)
                {
                    swap(st[i], st[j]);
                }
            }
        }
    }

    // Printing section
    for (int i = 0; i < n; i++)
    {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << " " << st[i].math_marks << " " << st[i].eng_marks << endl;
    }
    return 0;
}