//Cakeminator

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	
	int row[11]={0},col[11]={0};  //should be written as non empty
	
	int cnt=0;
	string s;
	
	int r,c;
	
	cin>>r>>c;
	
		for(int i=0;i<r;i++){
			
			cin>>s;
			
			for(int j=0;j<c;j++){
				
				if(s[j]=='S'){
					
					row[i]=1;
					col[j]=1;
					
				}
				
				   				
			}
		}
		
	
		
			for(int i=0;i<r;i++){
			
			
			
			for(int j=0;j<c;j++){
				
				if(row[i]==0 || col[j]==0)
				
				   cnt++;
				   
				
				   				
			}
		}
		
		cout<<cnt<<endl;
		
	
}
