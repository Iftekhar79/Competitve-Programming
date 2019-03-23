#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main(){
	int n;
	int arr[1001];
	cin>>n;
	
	
	for(int p=0;p<n;p++){
		cin>>arr[p];
	}
	
	sort(arr,arr+n);	
	int count=n-1;	
	
	for(int p=0,q=n-1; p<q; p++,q--){
		
	
		arr[q]=-4;  // after sorting last max interger would be discard first
	               	// as player 1 first turn who wants to minimize the last left element on the array ,
		            //so player 1 wants to discard maximum value element ,layer 2 wants to discar min value from sorted array  
		count--;
		if(count==0)
		break;
		
		arr[p]=-4;
		count--;
		if(count==0)
		break;
			
		
		
		
	}
	
	for(int p=0;p<n;p++){
	
		if(arr[p] != -4)  {
		
		
		cout<<arr[p]<<endl;//Ending it ,if only one element found because when n elements are there 
		                         //and n-1 elements are discarded from both side one to 
		                         //one then only one element left in the array  
		                         
		break;            //we can also use return 0 instead of breaking the loop 
		          
		
        } 
		
	}
	
	return 0;
	
}
