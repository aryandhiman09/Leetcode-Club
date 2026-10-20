link:https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=false

//x2 or x1 main difference nikala 
//v1 or v2 se kitna jump main difference hai vo dekha 

#include <bits/stdc++.h>
using namespace std;

string kangaroo(int x1,int v1,int x2,int v2){
  if(v1==v2){
    if(x1==x2)
    return "YES";
  }
  int diff=x2-x1;
  int speed=v1-v2;
  //ye isliye taaki agre rem =0 aaya tu same index pr dono 
  // divide isliye kiya ki vo negative main na jaaye
  if(diff%speed == 0 && diff/speed>=0)
  return "YES";
  
  return "NO";
}
int main(){
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    
    cout<<kangaroo( x1,v1,x2,v2)<<endl;
    
    return 0;
}
