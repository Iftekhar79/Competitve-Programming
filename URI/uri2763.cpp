//CPF Input and Output

#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>


using namespace std;

int main(){
	
	string s;
	
	getline(cin,s);
	
	for(int i=0;i<s.length();i++){
		
		if(s[i]>='0' && s[i]<='9')    //if any value is between 1 and 9 it will continue to print it, 
									  //if other symbol like . and - come then it will  take a line break.
		  cout<<s[i];
		  
		  else
		  cout<<endl;
		  
	}
	
	cout<<endl;
	
}
