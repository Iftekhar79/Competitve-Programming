// Declined Finalists

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	
	int cnt=0;
	int num=0;
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
		if(arr[i]<=25){
			cnt++;
			
		}
		num=max(num,arr[i]);
		
	}
	
	if(cnt==n){
		cout<<0<<endl;
		
	}
	else{
		
		cout<<num-25<<endl;
		
	}
	
	
	
}
