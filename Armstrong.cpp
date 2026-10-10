Date:9/10/2026

  link:https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

//You are given a 3-digit number n, Find whether it is an Armstrong number or not.

//An Armstrong number of three digits is a number such that the sum of the cubes of its digits is equal to the number itself. 371 is an Armstrong number since 33 + 73 + 13 = 371. 

//Examples:

//Input: n = 153
Output: true
#Explanation: 153 is an Armstrong number since 13 + 53 + 33 = 153. 
#Input: n = 372
#Output: false
#Explanation: 372 is not an Armstrong number since 33 + 73 + 23 = 378. 
#Input: n = 100
#Output: false
#Explanation: 100 is not an Armstrong number since 13 + 03 + 03 = 1.

Constraints:

//100 ≤ n < 1000

CODE:::


  class Solution {
public:
    bool armstrongNumber(int n) {
        int real = n;
        int sum = 0;
        int d;

        while (n > 0) {
            d = n % 10;
            sum = sum + d * d * d;
            n = n / 10;
        }

        if (sum == real) {
            return true;
        }
        else {
            return false;
        }
    }
};
