DATE:6/10/2026


  LINK:https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=false


#include <bits/stdc++.h>
using namespace std;

void plusMinus(int arr[], int n) {
    int add_count = 0;
    int sub_count = 0;
    int zero_count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            add_count++;
        }
        else if(arr[i] < 0) {
            sub_count++;
        }
        else {
            zero_count++;
        }
    }

    cout << fixed << setprecision(6);

    cout << static_cast<double>(add_count) / n << endl;
    cout << static_cast<double>(sub_count) / n << endl;
    cout << static_cast<double>(zero_count) / n << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    plusMinus(arr, n);

    return 0;
}
