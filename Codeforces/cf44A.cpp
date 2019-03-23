//Translation

#include<iostream>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;


int main(){
   
   string s1;
   
   string s2;
   int cnt=0;
   
   
   cin>>s1;
   cin>>s2;
   
   int len=s1.length();
   
   
   
   int i,j;
   
   
   for(int i=0,j=len-1;i<len,j>=0;i++,j--){
   	    
   	    if(s1[i] != s2[j])
   	    cnt++;
   	    
   	    
   }
   
   
   if(cnt>0){
   	cout<<"NO"<<endl;
   	
   }
   
   else 
   cout<<"YES"<<endl;
   
   
   
   
   
   
   
   
   
   	
   	
	
	
}
