//Eleven


#include<bits/stdc++.h>
#include<iostream>


using namespace std;

int main(){
	
	int n;
	int x=1,y=1;
	
	cin>>n;
	
	
	for(int i=1;i<=n;i++){
		
		if(i==y){
			
			cout<<"O";
			
			y=x+y;
			x=y-x;
			
		}
		
		else
		  
		  cout<<"o";
		
	}
	
	cout<<endl;
	
	
}
