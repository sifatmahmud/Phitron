#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};

// bool cmp(Student a, Student b)
// {
//     if (a.marks >= b.marks)
//         return true;
//     else
//         return false;
// }
bool cmp(Student a, Student b)
{
    if (a.marks > b.marks)
    {
        return true;
    }
    else if (a.marks < b.marks)
    {
        return false;
    }
    else
    {
        if (a.roll < b.roll)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
// bool cmp(Student a, Student b)
// {
//     return a.marks>=b.marks;
// }

int main()
{
    // input section
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // Working section
    sort(a, a + n, cmp);

    // printing section
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}