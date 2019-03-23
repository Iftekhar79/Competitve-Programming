//Mishka and Contest

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,k;
	cin>>n>>k;
	int arr[n];
	int i;
	
	for(int i=0;i<n;i++){	
		cin>>arr[i];	
	}
	
	int r=0,l=0;
		
	for( i=0;i<n;i++){
		
		if(arr[i]>k)   //if break occurs then the value is remembered for limiting the loop......the value of i will be stored for next for loop
		break;
		else
		r++;
		
		
	}
	
	for(int j=n-1;j>i;j--){   //stored i value is used here
		
		if(arr[j]>k)
		break;
		else
		l++;
		
		
	}
	
	
	
	int res=min(n,r+l);
	
	
	cout<<res<<endl;
	
	
	
}
