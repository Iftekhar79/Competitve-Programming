// Pineapple Incident

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t,s,x;
	int rem;
	
	
	cin>>t>>s>>x;
	
	
    if(x<t+s){
    	
    	if(x==t){
    		cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
			
		}
    	
	}
    else{
	
		rem=(x-t)%s;   
		
    	
    	if(rem<2){    //rem could be 0 or 1. as  it barks at times t, t+s, t+s+1, t+2s, t+2s+1, etc.
    		cout<<"YES"<<endl;
    		
		}
		else{
			cout<<"NO"<<endl;
			
		}
    	
	}
    
    
	
}
