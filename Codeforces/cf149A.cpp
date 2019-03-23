//Business trip

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int k;
	cin>>k;
	
	
	int arr[12];
	if(k==0)
	cout<<0;
	
	else if(k>0){
	
	
	for(int i=0;i<12;i++){
		cin>>arr[i];
		
	}
	
	sort(arr,arr+12);
	
	int sum=0;
	int cnt=0;
	

	for(int j=11;j>=0;j--){
		sum=sum+arr[j];
	     cnt++;
			  	
		if(sum>=k)
		  break;
		  
	      
	}
	
	if(sum>=k){
	
	cout<<cnt<<endl;
    }
    
    else if(sum<k){
    	cout<<"-1"<<endl;
	}
}
    

	
}
