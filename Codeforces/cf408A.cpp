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
	
	
	int res=10000000;
	
	for(int q=0;q<n;q++){
		int sum=0;
		i=0;
		for(int j=0;j<arr[i];j++){
			
			cin>>num;
			
			sum=sum+num*5;
			
			res=min(res,sum);			
		}
		i++;
		
	}
	
	cout<<res<<endl;
	
	
}
