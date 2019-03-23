// My Temporary Password

#include<bits/stdc++.h>

using namespace std;


string removezero(string str){
	
	int i=0;
	
	while(str[i]=='0' || str[i]=='R' || str[i]=='A'){
		
		
		i++;
		
		str.erase(0,i);
		
		
		return str;
		
	}
	
	
}

int main(){
	
	
	string str;
	int test;
	cin>>test;
	
	while(test--){
		
		
		cin>>str;
	    
	    int len=str.length();
	    
	    
		
		if(str[0]=='R' && str[1]=='A'){
			
			
			if(len==20){
			
			str=removezero(str);
			cout<<str<<endl;
		 
			
			
		}
		
		else
		cout<<"INVALID"<<endl;
		
			
			
		}
		
	else
	cout<<"INVALID"<<endl;
		
		
		
	}
	
	
}
