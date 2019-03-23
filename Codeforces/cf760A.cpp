// Petr and a calendar

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,d;
	
	cin>>n>>d;
	
	if((n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12) ){
		
		if(d==6 || d==7 ){
		
		cout<<"6"<<endl;
     
	 	}
	
			else 
			cout<<"5"<<endl;	
    }
    
    
	
	else if((n==4 || n==6 || n==9 || n==11 ) ){
	   if(d==7 ){
	   		cout<<"6"<<endl;
	   		
	   }
	   else 
	   cout<<"5"<<endl;
	}
	
	
	
	
	else if(n==2){
		if(d==1){
			cout<<"4"<<endl;
		}
		else 
		cout<<"5"<<endl;
		
	}
	
}
