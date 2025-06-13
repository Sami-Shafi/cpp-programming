#include<bits/stdc++.h>
using namespace std;

// Write a program to determine if a given string contains the word "Jessica." If the word is present in the string, the program should output "YES," otherwise it should output "NO."

// NOTE: You need to find only "Jessica"; not "jessica" or "JeSsica" or any other form. Words are separated by spaces.

// Input Format
// Input will contain a string S containing names. There is a space in between two names.
// Constraints
// 1 <= |S| <= 1000; Here |S| means the length of the string.

// Output Format
// Output YES or NO according to the question.

// Sample Input 0
// Rahat Rifat Sakib Asif Sifat Jessica Ratul Munna

// Sample Output 0
// YES

// Sample Input 1
// Rahat Rifat Sakib Asif Sifat Ratul Munna

// Sample Output 1
// NO

int main()
{
    string first;
    bool hasMatched = false;

    getline(cin, first);

    stringstream line(first);
    string word;
    while(line >> word) {
        if (word == "Jessica") {
            hasMatched = true;
            break;
        }
    }

    cout << (hasMatched ? "YES" : "NO");

    return 0;
} 