// Frequent Asked Questions

#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int main(){
	
	int n,k;
	int arr[1001]={0};
	int cnt;
	int num,i,j;
	
	
	while(cin>>n>>k && n && k){
	
	
	fill(arr,arr+1001,0);   //all index value are initialized to 0
	
	for( i=0;i<n;i++){
		
		cin>>num;
		
		arr[num]++;     //every index found byy number will be incremented by 1
		
	}
	
	 cnt=0;
	 
	for( j=0;j<1001;j++){
		
	    if(arr[j]>=k)
            cnt++;
					
	}
	cout<<cnt<<endl;
	
  }
	
	
}

