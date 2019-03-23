//Opponents

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,d;
	int zero;
	string s;
	cin>>n>>d;
	int ans=0;
	int cnt=0;
	for(int i=1;i<=d;i++){
		zero=0;	
		cin>>s;
		
		for(int j=0;j<s.size();j++){
			
	
			if(s[j]=='0'){     //if we found zero in any position of th string then it means arya will win and we will break the loop.
			 zero=1;                //make sure that we found one game as winner 
		     break;
		     }
			
		}
		
		if(zero==1){           //counting how many consecutive time arya is a winner
		
		  cnt++;	  
	    }
		
		 
		 else                //if any string where arya is not a winner then we will start counting  from zero again.as we need consecutive wins 
	     cnt=0;
	     
	     ans=max(cnt,ans);         //max consecutive wins will be the answer
			
		
	}
    
    
    cout<<ans<<endl;
    
	
	
	
	
	
}
