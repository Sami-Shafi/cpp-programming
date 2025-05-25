#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b, c = 9;
    cin >> a >> b;
    cout << min(a,b) << endl;
    cout << max(a,b) << endl;
    cout << min({a,b,c}) << endl;
    return 0;
}