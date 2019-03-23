//little brother

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	
	int test;
	
	cin>>test;
	
   while(test--){
   	
   	cin>>s;
   	int len=s.length();
   	
   	if(len==5)
   	cout<<"3"<<endl;
   	
   	
   	else if((s[0]=='t' && s[1]=='w') || (s[1]=='w' && s[2]=='o') || (s[0]=='t' && s[2]=='o'))
   	cout<<"2"<<endl;
   	
   	
   	else 
   	cout<<"1"<<endl;
   }
   	
   
	
}
