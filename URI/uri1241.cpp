//Fit or Dont Fit II

#include<iostream>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){
	
	string s1,s2;
	int test;
	int len1,len2,dif;
	int cnt,q;
	
	cin>>test;
	
	while(test--){
		
		cin>>s1;
		cin>>s2;
		
		len1=s1.size();    //size of string s1
		len2=s2.size();   //size of string s2 
	
		
		if(len2>len1){
			cout<<"nao encaixa"<<endl;
		}
		else if(len1>=len2){         //length could be equal or greater
			
			dif=len1-len2;             //length difference between strings
			
			q=0;  
			cnt=0;
			
			for(int i=dif;i<len1;i++){        //start from the difference value,and that value first position is equal to 2nd string first position
				
			   if(s1[i]==s2[q])
			   cnt++;
			   q++;	
				
			}
			
			if(cnt==len2)
			cout<<"encaixa"<<endl;
			else
			cout<<"nao encaixa"<<endl;
				
		}
		
	}
	
	
}
