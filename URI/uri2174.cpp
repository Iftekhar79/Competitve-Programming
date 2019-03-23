// Pomekon Collection

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	int test;
	
	set<string> myset;
	
	cin>>test;
	

	
	for(int i=0;i<test;i++){
		
		cin>>s;
		
		myset.insert(s);
		
	}
	
	cout<<"Falta(m) "<<151-myset.size()<<" pomekon(s)."<<endl;
	
	
	
}
