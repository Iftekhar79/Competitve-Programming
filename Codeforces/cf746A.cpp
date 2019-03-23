//Compote

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int sum,a,b,c,p;
	cin>>a>>b>>c;
	
	
	if(a==b || a==c)
	cout<<"0"<<endl;
	
	else{
		if(a*2<=b  && a*4<=c){
			sum=a+2*a+4*a;
			cout<<sum<<endl;
			
		}
		else{
		
		while(a--){
			
			if(a*2>=b && a*4>=c)
		      p=a;
		      break;
			
		}
		
		sum=a+2*a+4*a;
		
		cout<<sum<<endl;
         
		 }
	}
	
}
