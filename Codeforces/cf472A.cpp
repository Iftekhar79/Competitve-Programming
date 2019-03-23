#include<iostream>

using namespace std;

int main(){
	
	int n;
	int a,b;
	
	
	cin>>n;
	
	for(int i=2;i<n/2;i++){
		
		if(n%i==0)
		a=i;
		
		b=n-i;
		
		for(int j=2;j<n/2;j++){
			if(b%j==0)
			break;
			
		}
		
	}
	
	cout<<a<<" "<<b<<endl;
	
}
