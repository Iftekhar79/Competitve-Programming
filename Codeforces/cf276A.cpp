// Lunch Rush

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,k;
	int f,t;
	int joy;
	
	
	cin>>n>>k;
	
	int top=-1000000000;;
	
	
	for(int i=1;i<=n;i++){
		
		cin>>f>>t;
		
		if(t>k){
			joy=f-(t-k);
			
			top=max(top,joy);
			
			
		}
		else{
		
		joy=f;
		top=max(top,joy);
	  
	  }
		
	}

	cout<<top<<endl;
	

	
	
}
