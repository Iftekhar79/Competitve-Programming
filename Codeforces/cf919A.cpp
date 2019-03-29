// Supermarket

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	double a,b;

	int n,m;
	double p,mini=100.0;
	
	cin>>n>>m;
	
	while(n--){
		cin>>a>>b;
		p=a/b;
		
		mini=min(mini,p);
		
		
		
		
	}
	
	printf("%.8lf\n",(double)mini*m);
	
	
	
	
}
