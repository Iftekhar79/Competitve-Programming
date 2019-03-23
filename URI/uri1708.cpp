//Lap

#include<iostream>
#include<bits/stdc++.h>
#include<cmath>


using namespace std;


int main(){
	
	double a,b,dif;
	
	while(cin>>a>>b){
	
	dif=abs(b-a);  // avoiding abs gives an error
	double k=ceil(b/dif); //ceil() function closer int value of a float
	
	
	cout<<k<<endl;
	
    }
    
    return 0;
    
}
