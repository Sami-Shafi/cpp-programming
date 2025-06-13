#include<bits/stdc++.h>
using namespace std;

// You will be given two strings S and X. You need to replace all X from string S with a '#' sign.

// Input Format

// First line will contain T, the number of test cases.
// Next T lines will contain a line with S and X.
// Constraints

// 1 <= T <= 1000
// 1 <= |S|, |X| <= 1000
// |X| <= |S|
// Output Format

// For each test cases output the modified string S.

// Sample Input 0
// 2
// rahimisagoodguy good
// canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you

// Sample Output 0
// rahimisa#guy
// can#tellmewhereicanfindheriwillbegreatefulto#if#tellmetheanswer

int main()
{
    int t;
    cin >> t;

    while (t) {
        string first;
        string target;
        cin >> first >> target;

        for (int i = 0; i < first.size(); i++){
            if (first[i] == target[0]){
                string potential;
                for (int c = 0; c < target.size(); c++)
                {
                    potential += first[i+c];
                }
                if(potential != target) {
                    continue;
                }
                first.erase(i, target.size());
                first.insert(first.begin() + i, '#');
            }
        }

        cout << first << endl;
       
        t--;
    }

    return 0;
} 