#include <bits/stdc++.h>
using namespace std;

int birthday(int s[], int n, int d, int m) {
    int count = 0;

    for (int i = 0; i <= n - m; i++) {
        int sum = 0;

        for (int j = i; j < i + m; j++) {
            sum += s[j];
        }

        if (sum == d) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    int s[100];

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int d, m;
    cin >> d >> m;

    cout << birthday(s, n, d, m);

    return 0;
}



link:https://www.hackerrank.com/challenges/the-birthday-bar/problem?isFullScreen=false
