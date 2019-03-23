// Anton and Letters

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
 	set<char> myset;
 	
 	getline(cin,s);
 	
 	int i=1;
 	
 	while(i<s.length()){
 		if(s[i]!='}'){
		 
 			myset.insert(s[i]);
 		}
		 	i=i+3;
 			
 			
		 
	 }
	
	cout<<myset.size()<<endl;
	
}
