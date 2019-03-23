// Escalator

#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int main(){
	
	int n;
	int i;
	int sum;
	
	int arr[100];
	
	while(cin>>n && n){
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		sum=0;
		
		for(int i=1;i<n;i++){
		     
			 if(arr[i]-arr[i-1]<=10){
			 	
			 	sum=sum+(arr[i]-arr[i-1]);
			 }
			     
			  else
			  sum=sum+10;
			  
			 	
		}
		
		cout<<sum+10<<endl;
		
		
	}
	
	
}
