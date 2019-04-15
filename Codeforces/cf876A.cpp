//Trip For Meal

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int a,b,c;
	
	cin>>n;
	cin>>a>>b>>c;
	
	if(n==1){
		cout<<0<<endl;
		
	}
	
	if(n==2){
		cout<<min(a,b)<<endl;
		
	}
	
	if(n>2){
	
		cout<<min(a,b) + min(min(a,b),c)* (n-2)<<endl;
		
	
  	}
  
}
