// URI 1632 - Variations 

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
	
	int test,res;
	string s;
	string k="AEIOS";
	bool check;
	
	
	cin>>test;
	
    while(test--){
    		cin>>s;
    		res=1;
    		
	     
	for(int i=0;i<s.length();i++){
		
		check=false;
		
		for(int j=0;j<k.length();j++){
			
			if(s[i]==k[j] || s[i]==tolower(k[j]))
			     
				 check=true;
			
			
		}
		
		if(check)
		  res=res*3;
		  
		  else 
		  res=res*2;
		
	}
	
    	cout<<res<<endl;
	
	}
	
	
	
	
}
