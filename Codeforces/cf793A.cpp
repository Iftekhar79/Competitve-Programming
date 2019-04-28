// Oleg and shares

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,k;
	long long int arr[100000];
	long long int sum=0;
	long long int minn=1e18;
	
	
	cin>>n>>k;
	
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
		minn=min(arr[i],minn);
		
	}
	
	
	for(int i=0;i<n;i++){
		
		if((arr[i]-minn)%k!=0){
			cout<<-1<<endl;
			return 0;
			
		}
		
		
		else
		sum=sum+(arr[i]-minn)/k;
		
		
	}
	
	cout<<sum<<endl;
	
}
