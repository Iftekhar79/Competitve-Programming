// Garden

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,k,size;
	cin>>n>>k;
	
	int ans=10000;
	int res;
	while(n--){
		cin>>size;
		
		if(k%size==0)
		  res=k/size;
		  
		  ans=min(res,ans);
		  
	}
	
	cout<<ans<<endl;
	
	
	
}
