// Life without zeros

#include<bits/stdc++.h>

using namespace std;


long long int lifeofzero(long long int q){
	
	long long int rem,t=1;
	long long int res=0;
	
	while(q>0){
		
		rem=q%10;
		q=q/10;
		
		
		if(rem==0) continue;
		res=res+ rem*t;   //finding the value without zero
		t=t*10;
	
		
		
	}
	
	
	return res;
	
	
}



int main(){
	
	long long int a,b;
	long long int x,y,z;
	
	cin>>a>>b;
	
	int sum=a+b;
	
	x=lifeofzero(a);
	y=lifeofzero(b);
	z=lifeofzero(sum);
	
	
	if(x+y==z){
		cout<<"YES"<<endl;
	}
	else
	cout<<"NO"<<endl;
	
	
	
	
}
