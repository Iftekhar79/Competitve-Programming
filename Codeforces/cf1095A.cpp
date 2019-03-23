// Repeating Cipher

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	int n;
	
	cin>>n>>s;
	

	for(int i=0,j=0;j<s.length();i++,j=j+i){        //j is used to locate the start of multiple character set 
		
	
		cout<<s[j];
	   
	}
	cout<<endl;
	
}
