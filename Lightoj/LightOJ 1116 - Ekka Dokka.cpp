// Ekka dokka
 
#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
 
using namespace std;
 
int main(){
   
    long long int w,odd,i,j,test,check,p;
   
    scanf("%lld",&test);
   
   
    for(i=1;i<=test;i++){
       
        scanf("%lld",&w);
       
       
        p=w/2;
       
        odd=0;
        check=0;
       
        for(j=2;j<=p;j*=2){
           
            if(w%j==0)
            odd=w/j;
           
           
            if(odd%2==1){
                check=1;
                break;
                       
                }
           
           
        }
       
       
       
        if(check==1){
           
            printf("Case %lld: %lld %lld\n",i,odd,j);
           
               
        }
     
      else
     
        printf("Case %lld: Impossible\n",i);
       
       
    }
   
}
