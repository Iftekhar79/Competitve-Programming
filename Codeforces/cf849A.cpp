// Odds and Ends


#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	int arr[100];
	
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
	
	}
	
	
	if((n % 2 == 1) && (arr[0] % 2 == 1) && (arr[n - 1] % 2 == 1)) {
		cout<<"Yes"<<endl;

	}
	
	else
	cout<<"No"<<endl;
	 
	
	
}
