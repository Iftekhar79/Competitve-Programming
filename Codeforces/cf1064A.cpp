//Make a triangle

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int arr[3];
	
	for(int i=0;i<3;i++){
		
		cin>>arr[i];
	}
	
	
	sort(arr,arr+3);
	
	int val=arr[0]+arr[1];
	
	if(val<=arr[2]){
		
		int res=arr[2]-val+1;
		cout<<res<<endl;
		
	}
	else
	cout<<"0"<<endl;
	
	
	
	
	
	
}

