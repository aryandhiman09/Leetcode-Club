#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int temp = n;
        int count = 0;

        while (temp > 0) {
            int digit = temp % 10;

            if (digit != 0 && n % digit == 0) {
                count++;
            }

            temp /= 10;
        }

        cout << count << endl;
    }

    return 0;
}
