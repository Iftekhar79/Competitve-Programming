#include<iostream>
#include <bits/stdc++.h>


using namespace std;

int main(){
	
	int n;
	string s;
	
	int win=0,loss=0;
	
	cin>>n;
	
	cin>>s;
	
	
	
	for(int i=1;i<n;i++){
	
	if(s[i-1]!=s[i]){
	
	if(s[i-1]=='S')
	   win++;
	   
	   else
	   loss++;
}
		
	}
	
	if(win>loss)
	 cout<<"YES"<<endl;
	 
	 else
	  cout<<"NO"<<endl;
	
}
