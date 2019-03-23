// Vice Champion

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b,c;

	
	cin>>a>>b>>c;
	
	int q = max(a,max(b,c));
	
	int p=min(a,min(b,c));
	if(a>p && a<q){
		cout<<a<<endl;
		
	}
	
	else if(b>p && b<q){
		cout<<b<<endl;
		
	}
	
	else if(c>p && c<q){
		cout<<c<<endl;
		
	}
	
	
	
	
}
