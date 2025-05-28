#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g) {
        this->roll = r;
        this->cls = c;
        this->gpa = g;
    }
};

Student fun() {
    Student person = Student(2,6,4.5);
    return person;
}

int main () {
    Student Rahim = fun();
    cout << Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa << endl;
}