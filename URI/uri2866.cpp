// Cryptotext

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	int test;
	
	cin>>test;
	
	while(test--){
		cin>>s;
	
	int len=s.length();
	
	
	for(int i=len-1;i>=0;i--){
		
		if(s[i]>=97 && s[i]<=122)
		cout<<s[i];
		
      	}
        
        cout<<endl;
        
	}
	
	
	
}
