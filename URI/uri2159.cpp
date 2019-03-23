//Approximate Number of Primes

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int n;
	
	double p,q;
	cin>>n;
	
	
	p=n/log(n);
	q=1.25506*(n/log(n));
	
	printf("%.1f %.1f\n",p,q);	
	
	
}
