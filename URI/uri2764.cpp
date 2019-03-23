//Date Input and Output

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int d,m,y;
	
	scanf("%d/%d/%d",&d,&m,&y);
	
	
	if(m<10)
	cout<<"0";
	cout<<m<<"/";
	if(d<10)
	cout<<"0";
	cout<<d<<"/";
	if(y<10)
	cout<<"0";
	cout<<y<<endl;
	
	
	if(y<10)
	cout<<"0";
	cout<<y<<"/";
	if(m<10)
	cout<<"0";
	cout<<m<<"/";
	if(d<10)
	cout<<"0";
	cout<<d<<endl;
	
	
	
	if(d<10)
	cout<<"0";
	cout<<d<<"-";
	if(m<10)
	cout<<"0";
	cout<<m<<"-";
	if(y<10)
	cout<<"0";
	cout<<y<<endl;
	
	
	
	
	
	
	
	
	
}
