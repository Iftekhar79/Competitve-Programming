// Converting to Hexadecimal


#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	int num;
	int rem;
	char val[100];
	
	
	cin>>num;
	int i=0;
	
	while(num){
		rem=0;    // every looping time reminder is initialized to zero 
		rem=num%16;
	  //means greater than zero
	
		if(rem<10){
			val[i]=rem+48;
			i++;
		}
		else{
			val[i]=rem+55;
			i++;
			
		}
		
	
		num=num/16;
 
	}
	
	
	for(int j=i-1;j>=0;j--){
		
		cout<<val[j];
		
	}
	
	cout<<endl;
	
	
	
}
