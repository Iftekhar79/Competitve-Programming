// Parity

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int b,k;
	int sum=0;
	int i,num;
	
	cin>>b>>k;
	
	
	for( i=0;i<k;i++){
		cin>>num;
		sum=(sum*b+num)%2;
		
	}
	
	
	
	if(sum%2==1){
		cout<<"odd"<<endl;
		
	}
	else 
	cout<<"even"<<endl;
	
	
	
}
