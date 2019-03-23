// Championship

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b,c;
	int x,y,z;
	
	cin>>a>>b>>c;
	cin>>x>>y>>z;
	
	
	
	int point_a= a*3 + b;
	int point_x= x*3 + y;
	
	
	if(point_a> point_x  || point_a == point_x && c>z ){
		
		cout<<"C"<<endl;
		
	}
	
	else if(point_a < point_x  || point_a == point_x && c<z ){
		
		cout<<"F"<<endl;
		
	}
	else if(point_a == point_x  && c==z )
	cout<<"="<<endl;
	
	
	
	
}
