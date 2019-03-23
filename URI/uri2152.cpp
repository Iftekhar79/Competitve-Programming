//Pepe, I Already Took the Candle!

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int test;
	int h,m,s;
	
	cin>>test;
	
	
	while(test--){
		
		cin>>h>>m>>s;
		
		if(h<10)
		cout<<"0"<<h;
		else
		cout<<h;
		if(m<10)
		cout<<":0"<<m;
		else
		cout<<":"<<m;
		if(s==1)
		cout<<" - A porta abriu!"<<endl;
		else
		cout<<" - A porta fechou!"<<endl;
		
		
		
		
	}
	
}
