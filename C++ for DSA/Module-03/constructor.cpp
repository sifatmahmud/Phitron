#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // constructor
    Student(int roll, int cls, double gpa)
    {
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;

        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student rahim(29, 9, 5.00);
    Student karim(55, 6, 3.22);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}