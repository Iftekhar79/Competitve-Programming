// Lineland Mail

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	
	
	int minans,maxans;
	
	for(int i=0;i<n;i++){
		
	   if(i==0){
	   	 minans=abs(arr[i+1]-arr[i]);
	   	 
	   }
	   
	   else if(i==n-1){
	   	
	   	minans=abs(arr[i]-arr[i-1]);
	   	
	   }
	   else{
	   	
	   	minans=min(abs(arr[i+1]-arr[i]),abs(arr[i]-arr[i-1]));
	   	
	   }
	   
	   
	   	 if(i==0){
	   	 maxans=abs(arr[n-1]-arr[i]);
	   	 
	   }
	   
	   else if(i==n-1){
	   	
	   	maxans=abs(arr[i]-arr[0]);
	   	
	   }
	   else{
	   	
	   	maxans=min(abs(arr[i]-arr[0]),abs(arr[n-1]-arr[i]));
	   	
	   }
	   
	   cout<<minans<<" "<<maxans<<endl;
	   
	   
	   
	   
	   
		
	}
	
	
}
