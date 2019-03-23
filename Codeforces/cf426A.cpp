//Sereja and Mugs

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int max=0;
	
	int n,s;
	
	cin>>n>>s;
	int arr[n];
	
	int sum=0;
	
	
	
	for(int i=0;i<n;i++){
		
	     cin>>arr[i];
		
	}

	
	
		for(int i=0;i<n;i++){
		
	    
	    	 sum=sum+arr[i]; 
		
	  }
	
		for(int i=0;i<n;i++){
		
	    	   if(arr[i]>max)
	    		
				  max=arr[i];
		
	}

    	if(sum-max<=s){    // cause sereja has n-1 friends and to win of his friends one mug with maximum mug capacity should be discarded
    		cout<<"YES"<<endl;
    	}
    		else
			
    		cout<<"NO"<<endl;
    	
    	
		
    	
    	
}
