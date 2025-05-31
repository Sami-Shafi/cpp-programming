#include<bits/stdc++.h>
using namespace std;

// Problem Statement

// You will be given an array A of size N. Initially, you need to print the array by sorting it in ascending order. Afterward, you need to print the array sorted in descending order.

// Input Format

// First line will contain N.
// Next line will contain the array A.
// Constraints

// 1 <= N <= 10^5
// -10^9 <= A[i] <= 10^9 Where 0 <= i < N
// Output Format

// Print two lines. First line will contain the array sorted in ascending order. Next line will contain the array sorted in descending order.
// Sample Input 0

// 5
// 2 4 6 1 3
// Sample Output 0

// 1 2 3 4 6
// 6 4 3 2 1

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int asc[n], desc[n], val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        asc[i] = val;
        desc[i] = val;
    }

    sort(asc, asc+n);
    sort(desc, desc+n, greater<int>());

    printArr(asc, n);
    printArr(desc, n);

    return 0;
} 