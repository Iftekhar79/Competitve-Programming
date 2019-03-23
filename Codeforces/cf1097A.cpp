// Gennady and a Card Game

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s,str;
	
	cin>>s;
	int cnt=0;
	
	for(int i=0;i<5;i++){
		
		cin>>str;
		
		if(s[0]==str[0] || s[1]==str[1]){
			
			cnt++;
		}
		
	}
	
	
	if(cnt>0){
		cout<<"YES"<<endl;
	}
	
	else
	cout<<"NO"<<endl;
	
}
