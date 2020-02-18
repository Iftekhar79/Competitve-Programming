//  Palindromic Numbers (II)

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	int n,i;
	int test;
	
	
	cin>>test;
	
	for(i=1;i<=test;i++){
	
	cin>>n;
	
	int reverse=0;
	int rem;
	int p=n;
	
	while(n){
		
		rem=n%10;
		
		reverse=reverse*10+rem;
		
		n=n/10;
	
	} 
	
	if(reverse==p){
		cout<<"Case "<<i<<": Yes"<<endl;
		
	}
	
	else
	cout<<"Case "<<i<<": No"<<endl;
	
	
}
	
}
