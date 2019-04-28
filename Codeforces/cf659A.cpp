// Round House

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,a,b;
	
	cin>>n>>a>>b;
	
	
	int ans=(a+b)%n;
	
	if(ans<=0){ //that means ans is less than or equal to n in reverse way
	
		ans=n+ans;
	
	}
	
	
	cout<<ans<<endl;
	
	
	
	
}
