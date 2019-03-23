// Seesaw

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int p1,c1,p2,c2;
	
	cin>>p1>>c1>>p2>>c2;
	
	int r1=p1*c1;
	int r2=p2*c2;
	
	if(r1==r2){
		cout<<"0"<<endl;
		
	}
	
		else if(r1<r2){
		cout<<"1"<<endl;
		
	}
		else if(r1>r2){
		cout<<"-1"<<endl;
		
	}
	
	
	
}
