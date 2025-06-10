#include<bits/stdc++.h>
using namespace std;

// A ticket is a string consisting of six digits. A ticket is considered lucky if the sum of the first three digits is equal to the sum of the last three digits. Given a ticket, output if it is lucky or not. Note that a ticket can have leading zeroes.

// Input
// The first line of the input contains an integer t
//  (1≤t≤103) — the number of testcases.

// The description of each test consists of one line containing one string consisting of six digits.

// Output
// Output t lines, each of which contains the answer to the corresponding test case. Output "YES" if the given ticket is lucky, and "NO" otherwise.

// You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

// Example

// Input
// 5
// 213132
// 973894
// 045207
// 000000
// 055776

// Output
// YES
// NO
// YES
// YES
// NO

int sumOfDigits(int DigitBlock) {
    int sum = 0;
    while (DigitBlock > 0) {
        sum += DigitBlock % 10;
        DigitBlock /= 10;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long int num;
        cin >> num;

        int first3 = num / 1000;
        int last3 = num % 1000;

        if (sumOfDigits(first3) == sumOfDigits(last3)) {
            cout << "YES";
        } else {
            cout << "NO";
        }

        cout << endl;
    }
    

    return 0;
} 