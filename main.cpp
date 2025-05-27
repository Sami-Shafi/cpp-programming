#include<bits/stdc++.h>
using namespace std;

// Given a number N and an array A of N numbers. Print the array in a reversed order.

// Note:

// Don't use built-in-functions.

// Input
// First line contains a number N (1 ≤ N ≤ 103) number of elements.

// Second line contains N numbers (0 ≤ Ai ≤ 109).

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
} 