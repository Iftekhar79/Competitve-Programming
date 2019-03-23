// Water Buying
// minimum money need to buy n liters of water should find out
// a holds 1 liter and b holds 2 liter of water
// so minimum cost of 2*a and b , here they carry 2 liters each , so n.2 will be multiplied with them
// then find n%2, that means if 1 liters remain ,multiply it with a value.

#include<bits/stdc++.h>

using namespace std;

int main(){
	int test;
	long long int n;
	int a,b;
	
	cin>>test;
	
	while(test--){
		
		cin>>n>>a>>b;
		
		long long int result= (n/2)*(min(2*a,b))+(n%2)*a;
		
		cout<<result<<endl;
		
		
		
	}
}
