link:https://www.hackerrank.com/challenges/compare-the-triplets/problem?utm_
#include <bits/stdc++.h>

using namespace std;

int main(){
    int alice=0;
    int bob=0;
    int a[3];
    int b[3];
    
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        cin>>b[i];
    }
    for(int i=0;i<3;i++){
        if(a[i]>b[i])
            alice++;
         else if(a[i]<b[i])
         bob++;
            
        
    }
    cout<<alice<<" "<<bob;
    return 0;
}

//2loops for input one loop is for output
