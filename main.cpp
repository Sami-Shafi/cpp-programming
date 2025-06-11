#include<bits/stdc++.h>
using namespace std;

// You are given an array a of n integers. You have two kinds of operations

// increment any element in a (increase it by one).decrement any element in a (decrease it by one).
// What is the minimum number of operations to make the number of even elements equal to the number of odd elements, or detect that this is impossible?

// Input
// The first line contains a single integer t(1≤t≤10) the number of test cases.

// The first line of each test case contains an integer n(1≤n≤105) the number of elements in the array a .

// The second line of each test case contains n integers ai(1≤ai≤105) the elements of the array a.

// Output
// For each test case, print the minimum number of operations required, or −1 if it's impossible

// Example

// Input
// 3
// 4
// 1 2 3 4
// 4
// 1 1 1 1
// 3
// 1 2 3

// Output
// 0
// 2
// -1

int main()
{
    int t;
    cin >> t;

    while (t)
    {
        int nE;
        cin >> nE;
        int elems[nE];

        for (int i = 0; i < nE; i++)
        {
            cin >> elems[i];
        }
        
        int evc = 0, ovc = 0;
        for (int i = 0; i < nE; i++)
        {
            if (elems[i] % 2 == 0)
            {evc++;} else {ovc++;}
        }

        int gap = abs(evc-ovc);
        int ans = gap % 2 == 0 || gap == 0 ? gap/2 : -1;
        cout << ans << endl;

        t--;
    }
    

    return 0;
} 