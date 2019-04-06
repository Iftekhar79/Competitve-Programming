//Saitama Destroys Hotel

#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int n,s;
	int f,t;
	
	
	cin>>n>>s;
	
	
	int ans=s;
	
	for(int i=0;i<n;i++){
		
		cin>>f>>t;
		
		ans=max(ans,t+f);
		
		
	}
	
	cout<<ans<<endl;
	
	
	
	
}
