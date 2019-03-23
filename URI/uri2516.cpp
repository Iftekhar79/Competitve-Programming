//Running

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	double dis,va,vb,res;
	
	while(cin>>dis>>va>>vb){
		
		if(va<=vb)
		cout<<"impossivel"<<endl;
		
		else{
		
		res=dis/(va-vb)*1.00;
	  	
	  	printf("%.2f\n",res);
	}	
}

	
}
