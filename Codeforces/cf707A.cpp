// Brain's Photos

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m;
	char k;
	
	
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			
			cin>>k;
			
			if(k=='C' || k=='M' || k=='Y'){
				cout<<"#Color"<<endl;
				return 0;     // if means , function work has finished, no need to read other portion of the function.
				
				
			}
			
		}
		
	}
	
	cout<<"#Black&White"<<endl;
	
	
}
