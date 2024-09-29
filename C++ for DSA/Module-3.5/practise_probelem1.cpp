#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(char name, int roll, char section, int math_marks, int cls)
    {
        this->name[100] = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main()
{

    Student a('sifat', 10, 'B', 50, 5);
    Student b('rifat', 10, 'B', 40, 5);
    Student c('asif', 10, 'B', 66, 5);

    int high_marks = INT_MIN;
    if (a.math_marks > high_marks)
    {
        high_marks = a.math_marks;
    }
    if (b.math_marks > high_marks)
    {
        high_marks = b.math_marks;
    }
    if (c.math_marks > high_marks)
    {
        high_marks = c.math_marks;
    }

    // printing section

    if (high_marks == a.math_marks)
    {
        cout << a.name << endl;
    }
    else if (high_marks == b.math_marks)
    {
        cout << b.name << endl;
    }
    else
    {
        cout << c.name << endl;
    }

    return 0;
}