#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g) {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    Student b(2, 7, 4.5);

    cout << b.cls << " " << b.roll << " " << b.gpa << endl;

    return 0;
} 