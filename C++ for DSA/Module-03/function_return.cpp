#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    int gpa;
    Student(int roll, int cls, int gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student *fun()
{
    Student rahim(342, 5, 4.99);
    Student *p = &rahim;
    return p;
}
int main()
{
    Student *ans = fun();
    // cout << ans.roll << " " << ans.cls << " " << ans.gpa << endl;

    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;

    return 0;
}