#include<bits/stdc++.h>
using namespace std;

void checkMinMax(int* num, int* min, int* max) {
    if (*num < *min) {
        *min = *num;
    }else if (*num > *max) {
        *max = *num;
    }
}

int main()
{
    int a, b, c, min, max;
    cin >> a >> b >> c;

    min = a, max = a;
    checkMinMax(&b, &min, &max);
    checkMinMax(&c, &min, &max);

    cout << min << " " << max;

    return 0;
} 