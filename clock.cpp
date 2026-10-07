/*
//Date:7/10/2026;

//Problem:https://www.hackerrank.com/challenges/the-time-in-words/problem

//Function Description

//Complete the timeInWords function in the editor below.

//timeInWords has the following parameter(s):

//int h: the hour of the day
//int m: the minutes after the hour
//Returns

//string: a time string as described

//nput Format

//The first line contains , the hours portion The second line contains , the minutes portion

//Constraints

//Sample Input 0

//5
//47
//Sample Output 0

//thirteen minutes to six


#include <bits/stdc++.h>
using namespace std;

string timeInWords(int h, int m) {

    string numbers[] = {
        "zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen", "fifteen",
        "sixteen", "seventeen", "eighteen", "nineteen", "twenty",
        "twenty one", "twenty two", "twenty three", "twenty four",
        "twenty five", "twenty six", "twenty seven", "twenty eight",
        "twenty nine"
    };

    
    if (m == 0) {
        return numbers[h] + " o' clock";
    }

    
    if (m == 15) {
        return "quarter past " + numbers[h];
    }

    
    if (m == 30) {
        return "half past " + numbers[h];
    }
    if (m < 30) {
        if (m == 1) {
            return "one minute past " + numbers[h];
        }

        return numbers[m] + " minutes past " + numbers[h];
    }

    
    int nextHour = h + 1;

    if (nextHour == 13) {
        nextHour = 1;
    }

    int remaining = 60 - m;

    
    if (remaining == 15) {
        return "quarter to " + numbers[nextHour];
    }

    if (remaining == 1) {
        return "one minute to " + numbers[nextHour];
    }

    return numbers[remaining] + " minutes to " + numbers[nextHour];
}

int main(){
    int h,m;
    cin>>h>>m;
    
    string result = timeInWords(h,m);
    cout<<result;
}
