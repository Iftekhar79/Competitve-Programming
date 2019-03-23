#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main(){
	int n,k;
	int count=0;
	int p;
	
	cin>>n>>k;
	k=5-k; // can participate at most 5 times,
	// so if at least time k is given then reamining 
	// together participating as a team will be this equation

	for(int i=0;i<n;i++){
		cin>>p;
		
		if(p<=k)   // number of times their participation in contest
	
		count++;
		
		
	}
	

	cout<<count/3<<endl;



   
   
}
