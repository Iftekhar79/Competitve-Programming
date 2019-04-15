// Pasha and Hamsters

#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int n,a,b;
	
	cin>>n>>a>>b;
	
	int arr[n]={0};
	
	int num;
	
	while(a--){
		cin>>num;
		
		arr[num]=1;
		
		
	}
	
	while(b--){
		
		cin>>num;
		arr[num]=2;
		
		

	}
	
	
	for(int i=1;i<=n;i++){
		
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
	
	
}
