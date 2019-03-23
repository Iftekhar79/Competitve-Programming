//LEDS

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	int test;
	char num[101];
	
    int k,leds;
    
    
	cin>>test;
	
	while(test--){
	 
	 cin>>num;
	 
	    
	   leds=0;
		k=0;
	
		
		
		while(true){
			
			if(num[k]=='\0') break;
			  
			if(num[k]=='1')  leds=leds+2;
		    
		    
		   if(num[k]=='2') leds=leds+5;
		   
		   if(num[k]=='3') leds=leds+5;
		    
		    if(num[k]=='4')  leds=leds+4;
		    
		    if(num[k]=='5') leds=leds+5;
		    
		    if(num[k]=='6') leds=leds+6;
		    
		    if(num[k]=='7') leds=leds+3;
		    
		    if(num[k]=='8')    leds=leds+7;
		    
		   if(num[k]=='9')	    leds=leds+6;
		    
			if(num[k]=='0')   leds=leds+6;
		    
			k++;
			
		}
		
		cout<<leds<<" leds"<<endl;
		
	}
		

	
		
}
	
	
	
	

