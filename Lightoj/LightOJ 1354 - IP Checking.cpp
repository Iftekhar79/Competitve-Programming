// 1354 - IP Checking
 
#include<bits/stdc++.h>
#include<iostream>
 
using namespace std;
 
int dec_binary(int n){
   
    int rem,binary=0,y=1;
   
    while(n){
       
        rem=n%2;
        n=n/2;
       
       
        binary=binary+ rem*y;
        y=y*10;
       
    }
   
    return binary;
   
   
   
}
 
 
int main(){
   
    int test;
    int a,b,c,d;
    int e,f,g,h;
    int i,j,k,l;
   
   
    cin>>test;
   
    for(int x=1;x<=test;x++){
       
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
       
        e=dec_binary(a);
        f=dec_binary(b);
        g=dec_binary(c);
        h=dec_binary(d);
       
       
        scanf("%d.%d.%d.%d",&i,&j,&k,&l);
       
       
        if(e==i && f==j && g==k &&  h==l){
           
            cout<<"Case "<<x<<": Yes"<<endl;
        }
       
        else{
           
            cout<<"Case "<<x<<": No"<<endl;
        }
       
    }
   
   
   
   
}
