// The Doors

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int x;
	
	int left=0,right=0;
	
	// this loop finds last 0 or 1 is found , and finds minimum of their position
	for(int i=0;i<n;i++){
		
		cin>>x;
		
		 if(x==0){
		 	
		 	left=i;

		 }
		
		else{
			right=i;
			
		}
		
	}
	
	left++,right++;
	
	cout<<min(left,right)<<endl;
	
	
	return 0;
	
	
	
}
