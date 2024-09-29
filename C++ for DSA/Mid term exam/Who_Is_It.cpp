#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[100];
    char section;
    int marks;
};
int main()
{

    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        // creating objects and input value
        Student a, b, c;
        cin >> a.id >> a.name >> a.section >> a.marks;
        cin >> b.id >> b.name >> b.section >> b.marks;
        cin >> c.id >> c.name >> c.section >> c.marks;

        // getting maximum math marks
        int *arr[3] = {&a.marks, &b.marks, &c.marks};
        int mx = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            mx = max(mx, *arr[i]);
        }

        // printing section

        if (mx == a.marks)
        {
            cout << a.id << " " << a.name << " " << a.section << " " << a.marks << endl;
        }
        else if (mx == b.marks)
        {
            cout << b.id << " " << b.name << " " << b.section << " " << b.marks << endl;
        }
        else
        {
            cout << c.id << " " << c.name << " " << c.section << " " << c.marks << endl;
        }
    }

    return 0;
}