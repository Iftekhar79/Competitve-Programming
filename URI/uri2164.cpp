//Fast Fibonacci


#include<iostream>
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
	
	double res;
	int n;
	cin>>n;
	
	
	res=(pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5);
	
	printf("%.1f\n",res);
	
	
}
