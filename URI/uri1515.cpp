// Hello Galaxy

#include<bits/stdc++.h>
#include<math.h>

using namespace std;


int main(){
	
	string s,ans;
	int a,b;
	int test;


	
	
	while(cin>>test && test){
	
	
		int min=10000000;
		
		for(int i=0;i<test;i++){
			cin>>s>>a>>b;
		   
		
		   if((a-b) < min)
		   min=a-b;
		   ans=s;
		   
		   
		  
		}	
	}
	
	cout<<ans<<endl;
	
}
