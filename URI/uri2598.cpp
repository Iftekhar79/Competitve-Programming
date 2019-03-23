//Placing radars

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int test;
	
	int n,m;
	
	cin>>test;
	
	while(test--){
		
		cin>>n>>m;
		
		
		if(n<m)
		cout<<"1"<<endl;
		
		else if(n%m==0)
		 cout<<n/m<<endl;
		 
		 else
		 cout<<(n/m)+1<<endl;
		 		
	}
	
}
