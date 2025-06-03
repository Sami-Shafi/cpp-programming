#include<bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    stringstream strm(text);
    
    string word;
    int count = 0;

    while (strm >> word)
    {
        cout << word << endl;
        count++;
    }

    cout << count;

    return 0;
} 