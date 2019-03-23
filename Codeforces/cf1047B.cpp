//  Cover Points

#include<bits/stdc++.h>

using namespace std;

int main(){a
	
	long long int x,y;
	int test;
	long long int ans=0;
	
	cin>>test;
	
	while(test--){
		cin>>x>>y;
		
		ans=max(ans,x+y);
		
	}
	
	
	cout<<ans<<endl;
	
}
