// Insatisfaction on Elections

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
	
	int n,m;
	int num;
	int arr[10];
	
	cin>>n>>m;
	
	fill(arr,arr+10,0);
	
	for(int i=1;i<=m;i++){
		
		cin>>num;
		arr[num]++;
		
	}
	

	sort(arr,arr+n);
	

	cout<<arr[n]<<endl;
	
}
