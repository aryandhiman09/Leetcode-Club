link:https://www.hackerrank.com/challenges/electronics-shop/problem?isFullScreen=false


//code//
#include<bits/stdc++.h>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int ans = -1;

    for(int i = 0; i < keyboards.size(); i++) {
        for(int j = 0; j < drives.size(); j++) {
            int sum = keyboards[i] + drives[j];

            if(sum <= b && sum > ans) {
                ans = sum;
            }
        }
    }

    return ans;
}

int main() {
    int b, n, m;
    cin >> b >> n >> m;

    vector<int> keyboards(n), drives(m);

    for(int i = 0; i < n; i++)
        cin >> keyboards[i];

    for(int i = 0; i < m; i++)
        cin >> drives[i];

    cout << getMoneySpent(keyboards, drives, b);

    return 0;
}
