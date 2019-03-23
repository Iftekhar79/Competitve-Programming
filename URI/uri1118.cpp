//Several Scores with Validation

#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	double n;
	int cnt=0;
	
	while(scanf("%.1f\n",n)){
		
		if(n==2)
		  break;
		  
		  
	   if(n<0 || n>10){
	   	cout<<"nota invalida"<<endl;
	   	
	   }
	   
	   if(n>=0 && n<=10){
	   	    int sum=0;
	   	    cnt++;
	   	    sum=sum+n;
	   	    if(cnt==2){
	   	    	cout<<"media = "<<sum/2<<endl;
	   	    	cout<<"novo calculo (1-sim 2-nao)"<<endl;
	   	    	cnt=0;
	   	    	sum=0;
	   	    	
			   }
	   	
	   }
	   
	   if(n>1 ||)
	   
	}
	
}
