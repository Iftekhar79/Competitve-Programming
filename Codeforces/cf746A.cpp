//Compote

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int res,a,b,c,p;
	cin>>a>>b>>c;
	
	// need 1 lemon, 2 apple, 4 pears in compote. so min of them by dividing 1,2,4 each corresponding a,b,c and multiply with 7 is result
	res=7*min(min(a,b/2),c/4);
	
	cout<<res<<endl;
	
	
}
