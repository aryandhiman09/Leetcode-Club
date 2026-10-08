Date:8/10/2026

  link:https://www.geeksforgeeks.org/problems/prime-number2314/1

//Given a number n, determine whether it is a prime number or not.
//Input: n = 7
//Output: true
//Explanation: 7 has exactly two divisors: 1 and 7, making it a prime number.

bool isPrime(int n) {
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

//Main logic
