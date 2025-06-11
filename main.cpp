#include<bits/stdc++.h>
using namespace std;

// Given a number N and a character C. Print the character(C) N times.

// Note: Solve this problem using function.

// Input
// The first line contains a number T (1≤T≤50) the number of test cases.

// Next T lines contains a number N and a character C (1≤N≤100).

// Output
// Print T lines, for every line print the character(C) N times separated by space.

void charPrinter(int n, char c) {
    cout << c;
    for (int i = 0 ; i < n-1; i++)
    {
        cout << " " << c;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t)
    {
        int n;
        char c;
        cin >> n >> c;

        charPrinter(n, c);

        t--;
    }
    

    return 0;
} 