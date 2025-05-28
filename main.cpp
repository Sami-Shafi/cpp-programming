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

Student* objGenerator() {
    Student* person = new Student(7, 6, 4.50);
    return person;
}

int main()
{
    Student* Rahim = objGenerator();

    cout << Rahim->roll << " " << Rahim->cls << " " << Rahim->gpa << endl;

    return 0;
} 