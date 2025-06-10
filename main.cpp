#include<bits/stdc++.h>
using namespace std;

// Given a string S. Print number of times that "EGYPT" word can be formed from S's characters.

// Note: Case of the letters doesn't matter. For example: "Egypt", "egypt" and "eGyPt" are the same.

// Input
// Only one line contains a string S(1≤|S|≤106) where |S| is the length of the string and it consists of lowercase and uppercase English letters.

int main()
{
    string text;
    int counts[100] = {0};
    cin >> text;

    for (int i = 0; i < text.size(); i++)
    {
        char current = toupper(text[i]);
        if (current == 'E' || current == 'G' || current == 'Y' || current == 'P' || current == 'T') {
            counts[int(current)]++;
        }
    }

    cout << min({counts['E'], counts['G'], counts['Y'], counts['P'], counts['T']});
    
    return 0;
} 