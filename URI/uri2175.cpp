//What is the Fastest?

#include<iostream>

using namespace std;


int main(){
	
	float o,b,i;
	
	cin>>o>>b>>i;
	
	if(o==b || b==i || o==i){
		
		cout<<"Empate"<<endl;
	}	
		
	else if(o<b && o<i){
		cout<<"Otavio"<<endl;
	}
	
		else if(b<o && b<i){
		cout<<"Bruno"<<endl;
	}
		else if(i<o && i<b){
		cout<<"Ian"<<endl;
	}
	
	
	
	
	
}
