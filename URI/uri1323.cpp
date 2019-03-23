//Feynman

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int sum;
	
	while(cin>>n){
		
		if(n==0)
		  break;
		  
		  sum=0;
		  
		  while(n>=0){
		  	
		  	sum=sum+(n*n);
		  	n--;
		  }
	cout<<sum<<endl;
	
	}
	
}
