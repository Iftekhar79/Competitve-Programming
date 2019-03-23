// Handball

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m;
	cin>>n>>m;

	
	int v;
	int ans=0;
	
	for(int i=0;i<n;i++){
		int cnt=0;
		
		for(int i=0;i<m;i++){
			cin>>v;
			if(v>0)
			cnt++;
		}
		
		if(cnt==m)
		ans++;
		
		
		
	}
	
	
	cout<<ans<<endl;
	
	
	
	
	
}
