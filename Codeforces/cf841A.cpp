// Generous Kefa

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	char s[100];
	int n,k;
	
	cin>>n>>k;
	cin>>s;
	
	
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='a' && s[i]<='z'){
			s[i]++-'0';
			
		}
		
	}
	
		int sum=0;
	for(int i=49;i<=74;i++){
	     
	     if(s[i]-'0'>0){
	     	sum=sum+(s[i]-'0');
	     	
		 }
	}
	cout<<sum<<endl;
	
	
}
