//
#include<bits/stdc+.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	int sum=arr[n-1];
	
	for(int j=n-2;j>0;j++){
		
	    sum=sum+arr[n-2];
	
	    
	}
}
