//The Note

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int  main(){
	
	long long int n,k;
	int arr[1000000];
	while(cin>>n>>k){
	cout<<endl;
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
		
	}
	
	
	sort(arr,arr+n);
	
	int sum=0;
	
	for(int j=1,i=(n-1);j<=k;j++,i--){
		
		sum=sum+arr[i];
		
	}
	
	cout<<sum<<endl;
   }
	
	
	return 0;
	
}
