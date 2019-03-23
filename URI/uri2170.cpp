//Taxes of Project

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	double a,b;
	int cnt=1;
	double res,p;
	
	while(cin>>a>>b){
		
		res=((b-a)/a)*100.00;
		
		cout<<"Projeto "<<cnt<<":"<<endl;
		
		printf("Percentual dos juros da aplicacao: %.2lf ",res);
		cout<<"%"<<endl<<endl;
		
		cnt++;

	}
	
	
}
