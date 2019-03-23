// Vasya and Chocolate

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	long long int a,b,c,d;
	int test;
	cin>>test;
	
	while(test--){
	
	cin>>a>>b>>c>>d;
	
	long long int choco=(a/d);
	long long int total=choco+(choco/b)*c;
	cout<<total<<endl;
}
	
	
}
