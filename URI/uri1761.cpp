//Christmas Decorations

#include<iostream>
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
	
	double pi=3.141592654;
	
	double a,b,c,angle,thedo,res;
	
	
	
	while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
	
	angle= tan(a*pi/180.0);
	thedo=angle*b;
	res=(thedo+c)*5;
	
	printf("%.2lf\n",res);
	
	
	
	
    }
}
