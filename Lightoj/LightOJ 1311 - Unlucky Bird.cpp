// 1311 - Unlucky Bird
 
#include<bits/stdc++.h>
#include<stdio.h>
 
using namespace std;
 
int main(){
   
    int test;
   
    double v1,v2,v3,a1,a2;
    double t,t1,t2,d1,d2,d,bird_fly;
   
    cin>>test;
   
   
    for(int i=1;i<=test;i++){
       
        cin>>v1>>v2>>v3>>a1>>a2;
       
       
        t1=v1/a1;
        t2=v2/a2;
       
        if(t1>t2){
            t=t1;
        }
        
        else t=t2;
       
       
       
        d1=(v1*v1)/(2*a1);
        d2=(v2*v2)/(2*a2);
       
        d=d1+d2;
       
        bird_fly=t*v3;
       
        printf("Case %d: %lf %lf\n",i,d,bird_fly);        
           
    }   
}
