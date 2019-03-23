// Got Any Grapes?

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int x,y,z;
	int a,b,c;
	
	
	cin>>x>>y>>z;
	
	cin>>a>>b>>c;
	
	if(x<=a &&  y<=(a-x+b)   && z<=(a-x+b-y+c) )
	cout<<"YES"<<endl;
	else 
	cout<<"NO"<<endl;
	
	
	
}
