// Grace Hopper, Grandma of Cobol

#include<bits/stdc++.h>
#include<string>
#include<iostream>

using namespace std;


int main(){
	
 		
 		string s;
 		int pos;
        int test;
		
		cin>>test;
		
		while(test--){
		
 		cin>>s;
 		int cnt=0;
 		cout<<"k";
 		
 		for(int i=1;i<s.length();i++){   //find 'a' after 'h' ,so loop begins from 1
 			
 			if(s[i]=='a')
 			cnt++;
			
 			else{
 				
 				pos=i;       //get the position for finding a after "mek"
 				break;
 				
			 }			
		 }
		 
		 
		 
		 
		 for(int i=pos+3;;i++){      // after getting position , next finding of 'a' will be after 3 position as for "mek" has 3 character
		 	
		 if(s[i]!='a')
		 break;
		 		
		 		for(int p=0;p<cnt;p++){  //after "mek" for each 'a' there will be cnt number of 'a'
		 		
		 			cout<<"a";
		 			
				 }		
			
		 } 
		  cout<<endl;
 }
 		
 		
}
