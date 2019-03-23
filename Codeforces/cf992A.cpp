// Nastya and an Array

#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){
	
	cin.tie(0);
	
	set <int> p; 
	int n;
	int val;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>val;
		
		if(val)   // means val not equal to 0
		p.insert(val);
		cout<<val<<endl;
		
	}
	
	cout<<p.size()<<endl;
	
	
	
	
}
