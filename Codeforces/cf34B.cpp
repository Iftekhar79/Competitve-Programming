// sale

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m;
	cin>>n>>m;
	int arr[n];
	int b[n];
	

	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	sort(arr,arr+n);
	
		int sum=0;
	
	for(int j=0;j<m && arr[j]<0;j++){
		sum=sum+arr[j];
		
	}
	
	
	cout<<abs(sum)<<endl;
	
}
