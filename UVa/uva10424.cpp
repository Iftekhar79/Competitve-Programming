//uva-love_calculator
#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>


using namespace std;


int Calculate(char *name){
	

	int total=0;
	int temp;
	
	while(*name){
	
	if(*name>='A'  &&  *name <='Z'){
		total=total+*name-64;  //as capital alphabet starts from 65
	}
	
	else if(*name>='a' && *name<='z'){
	    total=total+*name-96; //as lower alphabet starts from 96	
	}
	name++;
	
}
	
	while(total>=10){
		
		temp=0;
		
		while(total){
			
			temp=temp+total%10;
			total=total/10;
			
		}
		
		total=temp;
		
	}
	return total;
	
}




int main(){
	
	char firstName[30],secondName[30];
	int first,second;
     float res;
     
    

	while(gets(firstName)){
		
		gets(secondName);
		
		 first=Calculate(firstName);
		 second=Calculate(secondName);
		
		
			if(first<second)
		printf("%.2f %%\n",first*100.00/second);
	
	else 	
		printf("%.2f %%\n",second*100.00/first);
	
		
		
	}

	
	
	

	
}
