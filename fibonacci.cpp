link:https://www.hackerrank.com/challenges/ctci-fibonacci-numbers/problem

//simple define hai 1 se small return 
// verna tu formula 
// recursion

code:
#include <iostream>

using namespace std;

int fibonacci(int n) {
   if(n<=1){
    return n; 
   }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}
