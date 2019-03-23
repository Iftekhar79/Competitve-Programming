//Power of Cryptography

#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
using namespace std;

int main(){
	
	  double n,p,k;  //long double not needed,else it gives error
	

	while(scanf("%lf %lf",&n,&p)!=EOF){  //scan of print lond double address should needed
		
		k=pow(p,1/n);    // k^n=p,so, k=p^(1/n)
		
		printf("%.0lf\n",k); //without .0lf ,here except zero writing gives an error
		
		
		
	}
	
}
