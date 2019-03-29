// Devu, the Singer and Churu, the Joker


#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,d;
	int total;
	
	cin>>n>>d;
	
	int arr[n];
	int sum=0;
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
		sum=sum+arr[i];
			
	}
	
	total=sum+(n-1)*10;
	
	if(total<=d){
		cout<<(d-sum)/5<<endl;
		
	}
	
	else 
	cout<<"-1"<<endl;
	
}
