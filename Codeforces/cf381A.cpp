// Sereja and Dima

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
		
	}
	
	sort(arr,arr+n);
	
	int seraja=0,dima=0;
	
	for(int i=n-1,j=n-2;i>=0 ,j>=0;i=i-2,j=j-2){
		
		seraja=seraja+arr[i];
		dima=dima+arr[j];
		
	}
	
	cout<<seraja<<" "<<dima<<endl;
	
}
