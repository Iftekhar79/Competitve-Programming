//number od diagonals give,find the sides of n-gone 


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long int N;
	
	int x;
	int k=1;
	
	
	while(cin>>N){
		if(N==0)
		break;
		
	x=ceil((3+sqrt(9+8*N))/2);
		cout<<"Case "<<k<<": "<<x<<endl;
	
    k++;
    
}

}
