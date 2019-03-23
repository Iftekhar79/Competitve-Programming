//Reconnaissance

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,d;
	cin>>n>>d;
	int arr[n];
	int val;
	
	int cnt=0;
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
		
	}
	
	
	sort(arr,arr+n);
	
	for(int i=0;i<n;i++){
			for(int j=1;j<n;j++){
		             
		             val=abs(arr[i]-arr[j]);
		             
		            if(val<=d)
		            cnt++;
		 
	       }
		
		 
	}
	
	cout<<cnt<<endl;
	
	
}
