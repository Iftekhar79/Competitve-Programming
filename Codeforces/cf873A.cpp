// Chores
//routine works

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,k,x;
	
	
	int sum=0;
	
	cin>>n>>k>>x;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
		
	}
	
    for(int i=0;i<n-k;i++){
    	sum=sum+arr[i];
    	
	}
	
	
	int ans= sum+ k*x;
	
	cout<<ans<<endl;
	
	
}
