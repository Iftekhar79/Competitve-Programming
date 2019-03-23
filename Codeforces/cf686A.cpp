//Free Ice cream

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	char sign;

	int sad=0;
	int n;
	long long int x,box;
	cin>>n>>x;
	
	
	for(int i=0;i<n;i++){
	   
	   cin>>sign>>box;
	   

	   
	   if(sign=='+'){
	   	x=x+box;
	   	
	   }
	   
	 else if(sign=='-'){
	         
	if(x<box)   //if we write x>box x=x-box will give error , as condition said that only when
	                 // demand of box gretaer than x has , will make one distressed/sad ;
	   sad++;
	
	   	
	  else 
	  	x=x-box; 
	  
	   	
	   }
	}
	
	cout<<x<<" "<<sad<<endl;
	
	
}
