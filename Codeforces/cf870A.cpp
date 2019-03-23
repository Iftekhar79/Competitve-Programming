// Pretty integers

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a[10],b[10];
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	
	
	for(int j=0;j<m;j++){
		cin>>b[j];
		
	}
	
	
	int ans=100;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			
			if(a[i]==b[j]){
				ans=min(ans,a[i]);
			}
				
				else{
				
				ans=min(ans,a[i]*10+b[j]);
				ans=min(ans,b[j]*10+a[i]);
				
			}
			
		}
	}
	
	cout<<ans<<endl;
	
	
}
