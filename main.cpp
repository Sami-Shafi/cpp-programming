#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nums[5];
    
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }

    reverse(nums, nums+5);

    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << " ";
    }
    

    return 0;
} 