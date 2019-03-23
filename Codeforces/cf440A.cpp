//  Forgotten Episode

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
	
	long long int num,n,total,sum=0;
	
	cin>>n;
	
	
	 
	
	
	for(int i=1;i<n;i++){
		
       cin>>num;
       
	   sum=sum+num;
	   		
		
	   }
	   
	   total= n*(n+1)/2;
	   
	cout<<total-sum;
	
	
	
	
	
	}
