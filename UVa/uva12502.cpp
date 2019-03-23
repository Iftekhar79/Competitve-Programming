//Three families-garden working problem

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

   int a,b;
   int money;
   
    int test;
    cin>>test;
    
    while(test--){
	
   cin>>a>>b>>money;
   
    int  paid=(money*(a+(a-b)))/(a+b);
   	
   	if(a<=0)
   	cout<<"0"<<endl;
   	else
	cout<<paid<<endl;
	
   }
}
