//Board Size

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int x,y,n;
	int p,q;
	int mult;
	
	
	while(cin>>x>>y>>n){
		
		
		while(n--){
		
		mult=x*y;
		
		cin>>p>>q;
		int pcb=p*q;
		
		if(mult>=pcb)
		cout<<"Sim"<<endl;
		else
		cout<<"Nao"<<endl;
        
		
		}
	}
	
}
