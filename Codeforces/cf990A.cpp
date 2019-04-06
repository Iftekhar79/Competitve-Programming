// Commentary Boxes

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long long n,m,a,b;


	cin>>n>>m>>a>>b;
	
	long long int construct=(m-(n%m))*a;   // we know m, after modulo (m-modulo ans) means meed more to build to reach next distribution for equal fullfillment
	long long int demolish =(n%m)*b;   //here, after modulo extra's will be demolished. if n<=m, we have demolish 
	
	
	cout<<min(construct,demolish)<<endl;
	
	
	

	
	
}
