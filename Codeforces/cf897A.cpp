// Scarborough Fair

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m;
	int i,j;
	string s;
	char temp;
	
	int le,r;
	char c1,c2;
	
    cin>>n>>m;
    cin>>s;
    
    
    
    for(int j=0;j<m;j++){
    	
    	cin>>le>>r>>c1>>c2;
    	
    	for(int i=le;i<=r;i++){
    		
    		if(s[i-1]==c1){
			
    			s[i-1]=c2;    // char can replaced, no need of swapping 
					
		     }
				
		}
		
	}
	
	cout<<s<<endl;

	
	
}
