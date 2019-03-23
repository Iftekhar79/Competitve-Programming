//Al long time ago
//before Christ(BC),should consider A.C for BC
//Anno Domini(AD),should consider D.C for AD

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int y;
	
	int test;
	cin>>test;
	
	while(test--){
		
		cin>>y;
		
		
		if(y>=2015)
		
		cout<<y-2014<<" A.C."<<endl;
		
		else if(y<2015)
		cout<<2015-y<<" D.C."<<endl;
		
		
	}
	
	
}
