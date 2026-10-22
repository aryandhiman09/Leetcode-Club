#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int h = stoi(s.substr(0, 2));

    if (s[8] == 'A' && h == 12)
        h = 0;
    else if (s[8] == 'P' && h != 12)
        h += 12;

    if (h < 10){ cout << "0";}
    cout << h << s.substr(2, 6);

    return 0;
}
