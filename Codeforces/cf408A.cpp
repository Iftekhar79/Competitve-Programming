// Line to Cashier

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int i,num;
	
	cin>>n;
	int arr[n];
	
	
	for( i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	int ans;
	
	int res=100000;
	
	for(int i=0;i<n;i++){
		int sum=0;
	
		for(int j=0;j<arr[i];j++){
			
			cin>>num;
			
			sum=sum+num*5;
				
		}
		ans=sum+arr[i]*15;
			
			res=min(res,ans);	
		
	}
	
	cout<<res<<endl;
	
	
}
