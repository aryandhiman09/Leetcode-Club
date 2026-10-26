link:https://leetcode.com/problems/binary-digit-score/

Code//
  #include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOnes(int n) {
        int count = 0;

        while (n > 0) {
            count += n % 2;
            n = n / 2;
        }

        return count;
    }

    int calculateScore(int a, int b) {
        int s1 = countOnes(a);
        int s2 = countOnes(b);

        if (s1 >= s2)
            return s1 * s2;
        else
            return s2 / s1;
    }
};
