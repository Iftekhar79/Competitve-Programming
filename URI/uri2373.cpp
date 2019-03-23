// Waiter

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	int test;
	
	int can,cup,sum=0;
	
	cin>>test;
	
	while(test--){
		
		cin>>can>>cup;
		
		if(can>cup){
			sum=sum+cup;
		}
		
	}
	cout<<sum<<endl;
	
}
