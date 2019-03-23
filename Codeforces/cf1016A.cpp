// Death Note

#include<bits/stdc++.h>


using namespace std;

int main(){
	
	
	int n,m;
	int sum=0,num;
	cin>>n>>m;


	
	for(int i=0;i<n;i++){
		cin>>num;
		
		
		sum=sum+num;
	
	    cout<<sum/m<<" ";  //every time sum divided by m names 
	    sum=sum%m;    		// every time sum modulo m is taken as new sum , it only gives greater than zero value when sum is between them ->  m<value<2*m<value<3*m....etc.
	     
	
}
		
			
		}
	
	

