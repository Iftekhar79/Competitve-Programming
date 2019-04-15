// Good Number

#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int n,k;
	int num;
	
	cin>>n>>k;
	
	int ans=0;
	
	while(n--){
		
		cin>>num;
		
		int cnt=0;
		
		while(num){
			num=num/10;
			cnt++;
			
		}
		
		if(cnt<=k){
			ans++;
			
		}
		
	}
	
	cout<<ans<<endl;
	
	
	
}
