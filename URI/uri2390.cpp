// Escalator

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	int cnt=0;
	int p;
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
	
	}
	
	
		for(int i=0;i<n;i++){
		
		
		if(arr[i+1]-arr[i]>10)
		    
			p=arr[i+1];
		
		cnt++;
		break;
		
		
	}
	
	
	int res=p-arr[0]+10+cnt*10;
	
	cout<<res<<endl;
	
	
	
}
