// Chocolate

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int p,sum=0;
	int ans;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		cin>>p;
		sum=sum+p;
		
	}
	ans=sum-n;
	cout<<ans<<endl;
		
	
}
