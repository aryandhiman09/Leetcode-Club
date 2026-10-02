#include<stdio.h>
 
 int Pagecount(int n,int p){
    int front=p/2;
    int back=n/2-p/2;
    
    if(front<back){
        return front;
    }else{
        return back;
    }}
     int main(){
        int n;
        int p;
        scanf("%d%d",&n,&p);
         printf("%d\n",Pagecount(n,p));
         return 0;
     }
 
