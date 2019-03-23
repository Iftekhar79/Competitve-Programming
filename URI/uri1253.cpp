// Caesar Cipher

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	int d;
	char p,q;
	int test;
	
	cin>>test;
	
	while(test--){
	
	
	
	cin>>s;
	cin>>d;
	
	
	
	for(int i=0;i<s.length();i++){
		
		p=s[i]-d;
		
		if(p < 65){
			q =p + 26;    // have to count 0 -25 ,total 26 lettters,so to find the character 26 should be added
			cout<<q;
	}
		
		else
		cout<<p;
	}
	
	cout<<endl;
	
	
}
	
}
