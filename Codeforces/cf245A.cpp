//System Administrator

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){
	int n;
	int p=0,q=0,r=0,s=0;	
	int t,x,y;
		cin>>n;	
	for(int i=1;i<=n;i++){
		
		cin>> t>> x>> y;	
	if (t==1)
		{
			p+= x; 
			q+= y;
		}
		else
		{
			r+= x;
			s+= y;
		}
	}
	if (p>= q)
		cout<<"LIVE"<< endl;
	else
		cout<<"DEAD"<< endl;
	if (r >= s)
		cout<<"LIVE"<< endl;
	else
		cout<<"DEAD"<< endl;
	return 0;
	
}
