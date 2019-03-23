#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int n,m;
	while(cin>>n>>m){	
	int arr[n];
	
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	
	int sum=0;
	
	int j=n-1;
	while(m--){
		sum=sum+arr[j];
		j--;
	
		
	} 
	cout<<sum<<endl;
	
  }
}
  


