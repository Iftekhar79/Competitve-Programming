// Problem with the Calculator

#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
	
	int test;
	int p,q,r;
	int a,b,c,d,e,f,g;
	cin>>test;
	
	
	string s;
	
	while(test--){
	//	p=0,q=0,r=0;
		cin>>s;
	
			
		    
			p=(s[2]-'0')*10+s[3]-'0';
	      
	      
	      
			q=(s[5]-'0')*100+(s[6]-'0')*10+s[7]-'0';
	      
	      
	 
			r=(s[11]-'0')*10+s[12]-'0';
		
;
	      
	    
		cout<<p+q+r<<endl;		
	}
	
	
}
