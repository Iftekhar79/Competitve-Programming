//Virus

#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int n;
	int arr[1000];
	
	while(cin>>n){
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	sort(arr,arr+n);
	int sum=0;
	
	
	int i=0;
	int j=n-1;
	
	while(j>i){
		
		sum=sum+abs(arr[i]-arr[j]);
		i++;
		j--;
		
	}
		
		cout<<sum<<endl;
	}
	   
}
