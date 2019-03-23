//Maximum Increase

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	
    int cnt=0;
    int val=0;
    
     int ans=0;
     
	
	
	for(int i=0;i<n;i++){
	     
	     if(val<arr[i])   //arr[i] is next position value, val is previous positioned value,if val is less than arr[i] then this sub array is increasing sub array.
	     cnt++;
	     else
	     cnt=1;
	     
	     val=arr[i];
	     
	     ans=max(ans,cnt);
	     
	     
	  
	   
	 }
	     
	cout<<ans<<endl;
		
	
		  	
    
    
}
