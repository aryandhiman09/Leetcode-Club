Date:5/10/2026

  link:https://www.hackerrank.com/challenges/sherlock-and-squares/problem



#include <bits/stdc++.h>
using namespace std;

int squares(int a, int b) {
    int count = 0;

    for (int i = 1; i * i <= b; i++) {
        if (i * i >= a) {
            count++;
        }
    }

    return count;
}

int main() {
    int q;
    cin >> q;

    while (q>0) {
        int a, b;
        cin >> a >> b;

        cout << squares(a, b) << endl;
        q--;
    }

    return 0;
}
