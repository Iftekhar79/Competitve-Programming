// Complete Sentence

#include<bits/stdc++.h>
#include<iostream>


using namespace std;

int main(){
	
	string s;
	
	int p;
	
	int len,i;
	set<char> myset;
	
	int test;
	cin>>test;
	 cin.ignore();
	while(test--){
	   
	
	   getline(cin,s);
	   
	   
	  
		len=s.length();
		p=0;
		for(i=0;i<len;i++){
				myset.insert(tolower(s[i]));
			
			
		}
		
		s[i]='\0';
		
		 p=myset.size();
		
		
		
		if(p==26){
			cout<<"frase completa"<<endl;
		}
		else {
		if(p>13)
			cout<<"frase quase completa"<<endl;
		
		else
			cout<<"frase mal elaborada"<<endl;
		}
		
		
		
		
		
       }
       
	}
	
	

