//Heist

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int cnt=0;
	
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	
	sort(arr,arr+n);
	
	for(int i=1;i<n;i++){
		if(arr[i]-arr[i-1]>1)
		cnt=cnt+arr[i]-arr[i-1]-1;
		
	}
	cout<<cnt<<endl;
	
}
