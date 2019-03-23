// Water bill

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int res;
	
	if(n>=0 & n<=10){
		cout<<"7"<<endl;
		
	}
	
	else if(n>10 && n<=30){
		res=7+(n-10)*1;
		cout<<res<<endl;
		
	}
	
	else if(n>30 && n<=100){
		res=27+(n-30)*2;
		cout<<res<<endl;
		
	}
	
	else if(n>100) {
		res=167+(n-100)*5;
		cout<<res<<endl;
		
	}
	
	
	
}
