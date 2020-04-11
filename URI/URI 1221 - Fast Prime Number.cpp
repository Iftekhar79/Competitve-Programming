// URI 1221 - Fast Prime Number

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {

   int test;
   int n;
   bool check=false;
   
   cin>>test;
   
   while(test--){
   	cin>>n;
   	if(n==1 || n==2){
   		cout<<"Prime"<<endl;
     	}
   
   	else {
   		
   		if(n%2==0){
     	cout<<"Not Prime"<<endl;
   		}
   		
   	
   	else{
   		for(int i=3;i<sqrt(n);i=i+2){
   				
   				if(n%i==0)
   					check=true;
   				
   			}
   			
   	
   		if(check){
   				cout<<"Not Prime"<<endl;
   		    	}
   			
   			else{
   				cout<<"Prime"<<endl;
   				
   			}
   			
   			
   			
   		}
   		
   		
   	}
   	
   
   	
   	check=false;
   	
   	
   	
   	
   }


}
