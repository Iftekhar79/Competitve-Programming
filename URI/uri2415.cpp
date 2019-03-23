// Consecutive

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	int n;
	
	cin>>n;
	int arr[n];
	

	int ans=0;
	
	int cnt=1;
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
		if(arr[i]==arr[i-1]){
		
		cnt++;
	     
		 }
	
	
		else{
			
			ans=max(ans,cnt);   //this is for when any array element not match to previous then cnt and last ans would be compared and maximum will be answer
		   cnt=1;
			
		}
	
		
		
		
	}
	
	
	ans=max(ans,cnt);   //this is for when the loop of n-th elements ends then this is not considered to make the maximum value in the for loop. so after exiting the loop the cnt value
	                       // and the last ans- maximum value would be the final answer

	cout<<ans<<endl;
	
	
	
}
