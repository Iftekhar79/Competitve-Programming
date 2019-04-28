// Zapping

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b;
	
	int ans;
	
	while(cin>>a>>b){
		
		
		if(a==-1 && b==-1)
				break;
		
		else if(((a>=0) && (a<=49)) && ((b>=0) && (b<=49))){
			ans=max(a,b)-min(a,b);
			
			
		}
		
		else if(((a>=50) && (a<=99)) && ((b>=50) && (b<=99))){
			
			ans=max(a,b)-min(a,b);
			
		}
		else{
			
			ans=min(max(a,b)-min(a,b),(100+min(a,b))-max(a,b));
			
		}
		
		cout<<ans<<endl;
		
	}
	
}
