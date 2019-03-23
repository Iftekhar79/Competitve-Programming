// Overflow

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int num;
	
	int p,q;
	char c;
	
	
	cin>>num;
	scanf("%d %c %d",&p,&c,&q);
	
	
	if(c=='+'){
		if(p+q>num){
			cout<<"OVERFLOW"<<endl;
		}
		else
		cout<<"OK"<<endl;
	}
	
	
	else if(c=='*'){
			if(p*q>num){
			cout<<"OVERFLOW"<<endl;
		}
		else
		cout<<"OK"<<endl;
	}
	
}
