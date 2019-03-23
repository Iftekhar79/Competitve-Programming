//Vito's family


#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){
	int arr[501];
	int test;
	cin>>test;
	
	while(test--){
	int n;
	
	
	int sum=0;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	sort(arr,arr+n);
	
	int median=arr[n/2];
	
	
	for(int i=0;i<n;i++){
	 sum=sum+abs(median-arr[i]);

	}
	
    
	cout<<sum<<endl;
}
	
	
		
	
}


