//T-primes

#include<iostream>

using namespace std;


int main(){
	
	
	int test;
	int num;
	
	cin>>test;
	
	while(test--){
		
		cin>>num;
		int cnt=0;
		for(int i=1;i<=num;i++){
			
			if(num%i==0)
			cnt++;
			
		}
		if(cnt==3)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
		
	}
}
