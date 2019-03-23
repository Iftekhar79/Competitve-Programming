//Even,odd or cheating

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int p,j1,j2,r,a;
	int sum,win;
	
	cin>>p>>j1>>j2>>r>>a;
	sum=j1+j2;
	
	if((p==1 && sum%2==0) || (p==0 && sum%2==1) )
	 win=1;
	
	else
	win=2;
	
	if((r==1 && a==0) || (r==0 && a==1))
	win=1;
	else if(r==1 && a==1)
	win=2;
	
	cout<<"Jogador "<<win<<" ganha!"<<endl;
	
	 
	
	
}
