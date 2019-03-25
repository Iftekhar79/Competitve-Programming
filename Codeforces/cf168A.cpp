// Wizards and Demonstration

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	float x,y;
	
	
	cin>>n>>x>>y;
	
	int res=ceil((n*y)/100);
	if(res>x){
	
	cout<<res-x<<endl;
}
	
	else
	cout<<"0"<<endl;
	
	
	
}
