//  Indecision of Reindeers


#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
	
	
	int i,r;
	int sum=0;
	
	
	for( i=1;i<=9;i++){
		cin>>r;
		
		sum+=r;
		
	}
	int rem;
	
	rem=sum%9;
	
	
	string name[9]={"Rudolph","Dasher","Dancer","Prancer","Vixen","Comet","Cupid","Donner","Blitzen"};
	
	for(int i=0;i<9;i++){
		
		
			cout<<name[rem]<<endl;
	 
	 break;
	 
		}
	}
	

