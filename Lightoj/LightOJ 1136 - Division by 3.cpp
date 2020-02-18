// division by 3
 
#include<bits/stdc++.h>
#include<stdio.h>
 
using namespace std;
 
int div(int n){
   
    if(n==0){
   
      return 0;
   }
   
   
   int ans=(n/3)*2;
   
   if(n%3==2){
   
       ans++;
       
   }
   
   
   return ans;
     
   
   
}
 
 
 
int main (){
    int test;
    int a,b;
   
   
    cin>>test;
   
    for(int i=1;i<=test;i++){
       
        cin>>a>>b;
       
        cout<<"Case "<<i<<": "<<div(b)-div(a-1)<<"\n";
       
       
    }
   
   
   
}
