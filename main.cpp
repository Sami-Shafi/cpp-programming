#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int marks;
};

bool sorter(Student prev, Student next) {
    return prev.roll <= next.roll;
}

int main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
    }

    sort(arr, arr+n, sorter);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }
    
    
    return 0;
} 