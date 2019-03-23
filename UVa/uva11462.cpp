//  Age Sort

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long long int n;
	
	
	while(cin>>n && n){
	
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	sort(arr,arr+n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
   }
   
   
}
