#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    
    
    int n;
    string s;
    
    
    cin>>n;
    cin>>s;
    
    int cnt=0;
    
    for(int i=0;i<n;i++){
        
        if(s[i]=='n'){
        	
            cout<<1<<" ";
        }
        
        
        
         if(s[i]=='z'){
            
            cnt++;
            
        }
        
        
        
        
    }
    
    
    
    for(int j=0;j<cnt;j++){
    	
    	
    	cout<<0<<" ";
    	
    	
	}
 
 
   cout<<endl;
   
    
}
