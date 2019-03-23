//Diving

#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>


using namespace std;


int main(){
	int test;
	cin>>test;
	
	while(test--){
	
	string s;
	double d;
	
	double arr[7];
	
	cin>>s;
	cin>>d;

	for(int i=0;i<7;i++){
		cin>>arr[i];
		
	}
	
	double min=arr[0];
	double max=arr[0];
	for(int i=1;i<7;i++){
		if(arr[i]>max)
		
		max=arr[i];
		
			if(arr[i]<min)
		
		     min=arr[i];
	}
	
	
    
    
     
      double sum=0.00;  // without writing 00 after point notation will give an error   :) 
      
    for (int i=0;i < 7 ;i++) {
        
        sum=sum+arr[i];
        
    }
    
        double res=(sum-(max+min))*d;
        
        cout<<s;
        printf(" %.2f\n",res);
	   
   }
}
