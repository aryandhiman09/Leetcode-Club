//Date:1/10/2026

//In this challenge, you need to calculate and print the sum of elements in an array, considering that some integers may be very large.

//Function Description

//Complete the  function with the following parameter(s):

//: an array of integers
//Return

//: the sum of the array elements
//Input Format

//The first line of the input consists of an integer .
//The next line contains  space-separated integers contained in the array.

//Output Format

//Return the integer sum of the elements in the array.

//Constraints
//1<=n<=10
//0<=ar[i]<=10^10

Sample
//STDIN                                                   Functio
-----                                                   --------
//5                                                       arr[] size n = 5
//1000000001 1000000002 1000000003 1000000004 1000000005  arr[...]  
//Output

//5000000015



  #include<bits/stdc++.h>
using namespace std;

long long aVeryBigSum(int ar[], int n)
{
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    cout << aVeryBigSum(ar, n);

    return 0;
}
