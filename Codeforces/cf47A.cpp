//Triangular numbers
// Triangular number means if there is a number n ,it means n number of dots will be present in a triangle each side
// such as n=4, the total number of dots will be the sum from 1 to n-1. so, sum=1+2+3=6. the sum can be written as ->  n*(n+1)/2......
//the result of equation will be the number of total dots of triangle which each side have n number of dots.




#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;     //here Tn means how many dots should be in each side of a triangle
	
	
	for(int i=1;i<=n;i++){           //we can do it also by loop sum. but using equation would be easy for that
		
		int res = i*(i+1)/2;      // triangular number itself is always exactly half of the number of objects
		
		if(res == n){             
			cout<<"YES"<<endl;
			return 0;
			
		}
		
		
	}
	cout<<"NO"<<endl;
	
	
	
	
	
}
