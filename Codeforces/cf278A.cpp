// Circle Line

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,a,b;
	int sum1=0,sum2=0;

	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
			
	}
	
	
	cin>>a>>b;
	
	for(int i=a-1;i!=b-1;i=(i+1)%n){
		
		sum1=sum1+arr[i];
			
	}
	
	for(int i=b-1;i!=a-1;i=(i+1)%n){
		
		sum2=sum2+arr[i];
			
	}
	
	


	if(sum1>sum2){
		
		cout<<sum2<<endl;
	
	}
	
	else
	cout<<sum1<<endl;
	
	
}
