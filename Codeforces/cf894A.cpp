// QAQ

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	
	string s;
	cin>>s;
	
	int len=s.length();
	
	int cnt=0;
	
	for(int i=0;i<len;i++){
		
		for(int j=i+1;j<len;j++){
			
			for(int k=j+1;k<len;k++){
				
				if(s[i]=='Q' && s[j]=='A' && s[k]=='Q')
					cnt++;
					
				
			}
			
		}
		
	}
	
	
	cout<<cnt<<endl;
	
	
}
