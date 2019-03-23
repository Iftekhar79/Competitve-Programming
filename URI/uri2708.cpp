//Tourists in the Huacachina Park

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string str;
	int p;
	int in=0,out=0;
	int zeep=0;
	
	while(cin>>str){
		
		if(str=="ABEND")
		break;
		cin>>p;
		
		if(str=="SALIDA"){
		
		       zeep++;
		       in=in+p;
	}
		else if(str=="VUELTA"){
		
		      zeep--;
		      out=out+p;
	 	}  
	}
	
	cout<<in-out<<endl;
	cout<<zeep<<endl;
	
	
	
	
}
