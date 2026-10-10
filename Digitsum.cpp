Date:10/10/2026

  link:https://www.hackerrank.com/challenges/recursive-digit-sum/problem

We define super digit of an integer  using the following rules:

Given an integer, we need to find the super digit of the integer.

If  has only  digit, then its super digit is .
Otherwise, the super digit of  is equal to the super digit of the sum of the digits of .
For example, the super digit of  will be calculated as:

	super_digit(9875)   	9+8+7+5 = 29 
	super_digit(29) 	2 + 9 = 11
	super_digit(11)		1 + 1 = 2
	super_digit(2)		= 2  


  Code//
  #include <bits/stdc++.h>
using namespace std;

int digitsum(int n) {
    if (n < 10) {
        return n;
    }

    int sum = 0;

    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    return digitsum(sum);
}

int superDigit(string n, int k) {
    int sum = 0;

    for (int i = 0; i < n.length(); i++) {
        int digit = n[i] - '0';
        sum = sum + digit;
    }

    return digitsum(sum * k);
}

int main() {
   string n;
   int k; 

        cin >> n >> k;

        cout << superDigit(n, k);
    

    return 0;
}



