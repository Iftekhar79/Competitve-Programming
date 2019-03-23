// Anton and Digits

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int k,p,ans,a,b,c,d;
	cin>>a>>b>>c>>d;
	
	 ans=min(a,min(c,d));
	
	p=a-ans;
	
	
	
	
		k=min(p,b);
	
	
	
	
	
	cout<<ans*256+k*32<<endl;
	
	
}
