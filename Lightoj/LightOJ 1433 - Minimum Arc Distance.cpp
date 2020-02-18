// Minimum Arc Distance
 
#include<bits/stdc++.h>
#include<iostream>
 
using namespace std;
 
int main(){
   
    int test;
    double ox,oy,ax,ay,bx,by;
   
    double oa,ab;
    double q,res;
   
   
    cin>>test;
   
   
    for(int i=1;i<=test;i++){
       
       
        cin>>ox>>oy>>ax>>ay>>bx>>by;
       
       
        oa=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
        ab=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
       
        q= acos((2*oa*oa-ab*ab)/(2*oa*oa));
       
        res=q*oa;
       
       
        printf("Case %d: %lf\n",i,res);
       
             
    }  
   
}
