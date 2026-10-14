link:https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=false

Pahle total sum than max or min - kr diye 

max or min 0 index pr rakhe than unko compare kiya sabse or jo actual max or min hai vo insert kr diye  


Code:
#include<bits/stdc++.h>

using namespace std;

int minimaxsum(int arr[5]){
    int i;
    int max=arr[0];
    int min=arr[0];
    long long  sum=0;
    
    for(i=0;i<5;i++){
        sum=sum+arr[i];
        if(min>arr[i]){
            min=arr[i];
        }if(max<arr[i]){
            max=arr[i];
        }
        
    }
cout << sum - max << " " << sum - min;
   return 0;
   
        
       
    
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    
    minimaxsum(arr);
    return 0;
    
}
