//Summation of Polynomials

#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdio>
using namespace std;


int main(){
	
	int n;
	long long res;
	
	while(scanf("%d",&n)==1){
		res=1;
		res=res*n*n*(n+1)*(n+1)/4;
		
	printf("%lld\n",res);
		
		
	}
	
	
}
