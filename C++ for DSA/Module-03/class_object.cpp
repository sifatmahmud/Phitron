#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.cgpa;
    getchar();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;

    // printing section
    cout << "Name : " << a.name << endl;
    cout << "Roll : " << a.roll << endl;
    cout << "Cgpa : " << a.cgpa << endl
         << endl;

    cout << "Name : " << b.name << endl;
    cout << "Roll : " << b.roll << endl;
    cout << "Cgpa : " << b.cgpa << endl;
    return 0;
}