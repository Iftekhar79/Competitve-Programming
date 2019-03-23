// Tricky Alchemy

#include<bits/stdc++.h>

using namespace std;


int main(){
	
     long long int a,b,x,y,z,p=0;

	long long int y_crys,b_crys,res;
	
	
	cin>>a>>b;
	cin>>x>>y>>z;
	
	y_crys = 2*x + y ;
	b_crys = y + 3*z ;
	
	 res=max(y_crys-a,p) + max(b_crys-b,p);
	
	cout<<res<<endl;
	
	
	
}
