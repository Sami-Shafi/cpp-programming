#include<bits/stdc++.h>
using namespace std;

// Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

// Input
// Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

// Output
// Print 3 lines that contain the following in the same order:

// "X + Y = summation result" without quotes.
// "X * Y = multiplication result" without quotes.
// "X - Y = subtraction result" without quotes.

int main()
{
    int x, y;
    cin >> x >> y;

    cout << "X + Y = " << x+y << endl;
    cout << "X * Y = " << x*y << endl;
    cout << "X - Y = " << abs(x-y);
    
    return 0;
} 