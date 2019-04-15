// Insomnia Cure

#include<bits/stdc++.h>

using namespace std;

int  main(){
	
	int k,l,m,n,d;
	
	cin>>k>>l>>m>>n>>d;
	
	
	int cnt=0;   // this count unharmed dragons
	
	for(int i=1;i<=d;i++){
		
		if((i%k!=0) && (i%l!=0) && (i%m!=0) && (i%n!=0))       // is equal to 0 means harmed by k-th,l-th,m-th,n-th ----> any of these . 
		    cnt++;
		 
		
	}
	
	
	cout<<d-cnt<<endl;
	
	
}
