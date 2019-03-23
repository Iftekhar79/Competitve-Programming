//  Left-handers, Right-handers and Ambidexters

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	int left,right,both;
	
	cin>>left>>right>>both;
	
	int res=min((left+both)*2,min((right+both)*2,(left+right+both)/2*2));
	
	cout<<res<<endl;
	
	
	
	
}
