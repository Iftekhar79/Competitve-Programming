//Array Simulation

#include<bits/stdc++.h>
#include<iostream>
 
using namespace std;
 
  int main(){
   
    int n,m;
    int test;
   
   
    char x;
    int add,mul,div,f,g;
   
   
    cin>>test;
   
    int cnt=1;
   
   
   
    while(test--){
       
    cin>>n>>m;
   
    int arr[n];
   
    for(int i=0;i<n;i++){
 
        cin>>arr[i];
               
    }
   
   
   
    while(m--){
       
      cin>>x;
     
     
      if(x=='S'){
       
        cin>>add;
       
        for(int i=0;i<n;i++){
           
            arr[i]=arr[i]+add;
           
           
          }
      }
     
     
     
      else if(x=='M'){
       
        cin>>mul;
       
        for(int i=0;i<n;i++){
           
            arr[i]=arr[i]*mul;
           
           
          }
      }
     
     
     
    else if(x=='D'){
       
        cin>>div;
       
        for(int i=0;i<n;i++){
           
            arr[i]=arr[i]/div;
           
           
          }
      }
     
     
     
     
     else if(x=='R'){
       
      int c;
     
      int a=0,b=n-1;
     
      while(a<b){
       
        c=arr[a];
        arr[a]=arr[b];
        arr[b]=c;
       
        a++;
        b--;
       
          }
     
      }
     
     
     
     else if(x=='P'){          
        int temp;
       
        cin>>f>>g;
       
        temp=arr[f];
        arr[f]=arr[g];
        arr[g]=temp;
           
      }    
       
    }
   
 
    cout<<"Case "<<cnt<<":"<<endl;
   
    cnt++;
   
   
    for(int i=0;i<n-1;i++){
       
        cout<<arr[i]<<" ";
       
        }
       
    cout<<arr[n-1];
   
    cout<<endl;
   
   
   
   }
   
   
}
