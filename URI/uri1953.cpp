// Robert and Rampant Room

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	int test;
	int a,b,c;
	int id;
	string s;
	
	
	while(cin>>test){
		 a=0,b=0,c=0;
		 
		 while(test--){
		 	
		 	 cin>>id;
			 cin>>s;
		 	
		 	if(s=="EPR"){
		 		a++;
			 }
			 else if(s=="EHD"){
		 		b++;
			 }
			 else
			 c++;
			 
		 	
		 }
		
		cout<<"EPR: "<<a<<endl;
		cout<<"EHD: "<<b<<endl;
		cout<<"INTRUSOS: "<<c<<endl;
		
		
		
	}
	
}
