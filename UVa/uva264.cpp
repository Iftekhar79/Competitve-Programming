//Count on Cantor

#include<iostream>
#include<bits/stdc++.h>
#include<cmath>

#define datatype unsigned long long int 

using namespace std;

int main(){
	
	datatype n;
	
	while(cin>>n){
		
		
		double d=ceil((sqrt(1+8*n)-1)/2);  //the index d of the diagonal a given number n is in. 
		                                  //The number of elements before diagonal d is, n=(d(d+1))/2
                                           //the number n is in diagonal is , d=1+sqrt(1+8n)/2
		datatype m= (datatype)(d-1);
		datatype nn=n-(m+1)*m/2;
		
		m++;
		
		datatype a,b;
		
		if(m%2==0){
			a=nn;
			b=m+1-nn;
		}
		
		else{
			a=m+1-nn;
			b=nn;
		}
		
	cout<<"TERM "<<n<<" IS "<<a<<"/"<<b<<endl;
	

		
	}
	
	
	
}
