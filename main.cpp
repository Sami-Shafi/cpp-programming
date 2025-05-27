#include<bits/stdc++.h>
using namespace std;

// Given a number N, and N numbers, find maximum number in these N numbers.

// Input
// First line contains a number N (1 ≤ N ≤ 103).
// Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

// Output
// Print the maximum number.

int main()
{
    int n, max = INT_MIN;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << max;
    

    return 0;
} 