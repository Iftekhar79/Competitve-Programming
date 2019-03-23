// Paper Airplanes

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int k,n,s,p;
	
	cin>>k>>n>>s>>p;
	
	int sheet=(n+s-1)/s;
	int total_sheets=k*sheet;
	int total_pack=(total_sheets+p-1)/p;
	
	cout<<total_pack<<endl;
	
	
}
