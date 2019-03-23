// Pangram
// all 26 character should exist in a given string is called a pangram
// number of unique characters will be 26
// set always take uniques value or character, using set is useful here


#include<bits/stdc++.h>

using namespace std;

int main(){
	

   int len;
   string s;
   set<char> myset;
   
   cin>>len;
   cin>>s;
   

   for(int i=0;i<len;i++){
   	
   	  myset.insert(tolower(s[i]));
   	  
   	  
   	
   	
   }
   
   if(myset.size()==26)
   cout<<"YES"<<endl;
   
   else 
   cout<<"NO"<<endl;
   
	
	
}
