// One-dimensional Japanese Crossword

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
	
	vector<int>  myvector;
	
	
	int n;
	char s[101];
	cin>>n;
	cin>>s;
	
	int cnt=0;
	
	for(int i=0;i<n;i++){
		
		if(s[i]=='B')     //untill character 'W' is found
		 cnt++;
		 
		 else{                 //if found 
		 	if(cnt)                  //means when cnt value is greater than zero
		 	  myvector.push_back(cnt);  // inserting value into myvector
		 	  
		 	  cnt=0;          // again initialized to 0
			   	  
		 }
		
		
	}
	
	
	if(cnt){       //when string ends with B, no W is found then the latest cnt value will be inserted into myvector 
	
	myvector.push_back(cnt);
	
     }
	 
	  
	  
	  
	cout<<myvector.size()<<endl;
	
	if(myvector.size()){ //if myvector is not zero sized
		
		for(int j=0;j<myvector.size();j++){
			
			cout<<myvector[j]<<" ";
		}
		
		cout<<endl;
		
		
	}
	
	
	
	
}
