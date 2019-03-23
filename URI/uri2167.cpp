//Engine Failure

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	bool eng=true;
	
	int arr[n];
	
	int cnt=0;
	for(int i=0;i<n;i++){
			
		cin>>arr[i];
		
	}
	
	for(int i=0;i<n-1;i++){
			
		if(arr[i+1]<arr[i]){
		
		cout<<i+2<<endl;	
	    eng=false;
	   break;
	}
		
		
		
	}
	
 		if(eng)
 		cout<<"0"<<endl;
	
	
}
