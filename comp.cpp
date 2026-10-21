link:https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=false

//





Code:
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int s[1000];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int max = s[0], min = s[0];
    int max1 = 0, min1= 0;

    for (int i = 1; i < n; i++) {
        if (s[i] > max) {
            max = s[i];
            max++;
        }
        if (s[i] < min) {
            min = s[i];
            min1++;
        }
    }

    cout << max1 << " " << min1;
    return 0;
}
