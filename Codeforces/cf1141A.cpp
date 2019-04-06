// Game 23

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m;
	
	cin>>n>>m;
    
    
    int cnt=-1;
    
    if(m%n==0){
    	cnt=0;
    
    int div=m/n;
    
    while(div%3==0){
    	div=div/3;
    	cnt++;	
	}
	
	while(div%2==0){
		
		div=div/2;
		cnt++;		
	 }
	 // when n==m ,then div=1,not possible for modulo of 2 and 3, then if div ==1 then cnt=0;output will be div=0.
	 
	 
	 
	 if(div!=1)  // it means when modulo of 2 and 3 is not possible of div , then div is not 1 ,but a fractional value
	 	cnt=-1;
	 			
	}
    
    
	cout<<cnt<<endl;
	    
     	
 }
     
  
  	
	

