// Arpa and a research in Mexican wave

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,k,t;
	
	cin>>n>>k>>t;
	
	if(t<=k){
		cout<<t<<endl;
	}
	else if(t>k && t<=n){
		cout<<k<<endl;
	}
	
	else 
	cout<<n-(t-k)<<endl;
	
}
