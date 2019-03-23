// Cards

#include<bits/stdc++.h>

using namespace std;


int main(){
	
	pair<int,int> arr[100];
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i].first;
		
		arr[i].second=i+1;
		
		
	}
	
	sort(arr,arr+n);
	
	
	for(int i=0;i<n/2;i++){
		
		cout<<arr[i].second<<" "<<arr[n-i-1].second<<endl;
		
	}
	
	
	
}
