// One-dimensional Japanese Crossword

#include<iostream>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){
	
	char s[100];
	int n;
	int cnt=0;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		
	      cin>>s[i];
		  	
	}
	
	
	
	for(int i=0;i<n;i++){
		
	      if(( s[i]==s[i+1]) && s[i]=='B') {
	      	cnt++;
		  }
		  	
	}
	
	cout<<cnt<<endl;
	
	
}
