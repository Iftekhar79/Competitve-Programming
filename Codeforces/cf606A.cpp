// Magic Spheres

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b,c,x,y,z;
	
	
	cin>>a>>b>>c;
	cin>>x>>y>>z;
	
	a=a-x;
	b=b-y;
	c=c-z;
	
	
	
	int ans=0;
	
	
	
	if(a>=0){
		ans=ans+a/2;
	}
	else
	ans=ans+a;
	  
	  
	if(b>=0){
		ans=ans+b/2;
	}
	else 
	ans=ans+b;
	
	
	if(c>=0){
		ans=ans+c/2;
	}
	else
	ans=ans+c;
	
	
	if(ans>=0){
		cout<<"YES"<<endl;
		
	}
	else
	cout<<"NO"<<endl;
	

}
