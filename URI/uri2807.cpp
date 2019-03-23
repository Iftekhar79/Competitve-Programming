#include<iostream>
using namespace std; 
int main() {
 int t,i; 
 cin>>t; 
   int v[t]; 
    v[0]=1; 
    v[1]=1; 
    
   for(i=2;i<t;i++) { 
     v[i]=v[i-1]+v[i-2];
      }
      
      
   for(i=t-1;i>=0;i--) 
   cout<<v[i]<<" "; 
   cout<<endl;
   
   return 0; }
