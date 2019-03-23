// Grandpa's balance

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,val;
	int a;
	cin>>n>>val;
	int sum=val;
	int ans=1001;
	while(n--){
		cin>>a;
		
		sum=sum+a;
		
		ans=min(ans,sum);

		
	}
	
	cout<<ans<<endl;
	
}
