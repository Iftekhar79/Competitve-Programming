// KiloMan

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int test;	
	int n;	
	int arr[50];
	string s;
    cin>>test;
    
		
    while(test--){
    	
    	
    	cin>>n;
    
    for(int i=0;i<n;i++){
    	
			cin>>arr[i];
    		
		}
		
		cin>>s;
		
    	int i=0;
    	int cnt=0;
    	
    	
    	while(i<n){
    		
    		if((arr[i]==1 || arr[i]==2) && s[i]=='S'){
			
    		cnt++;
    	}
    		if(arr[i]>2 && s[i]=='J')   {
			
    		cnt++;
    	}
    	
    	
    	
    	i++;
    	
    		
    		
		}
    	
    	cout<<cnt<<endl;
    	
    	
	}
	
	
	
}
