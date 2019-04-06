//  PolandBall and Hypothesis

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	
	int res;
	bool check=true;
	
	for(int i=1;i<=1000;i++){
		
		res=(n*i)+1;
		
		for(int j=2;j<res/2;j++){
			if(res%j==0)
			check=false;
			
			 
		}
		
		if(!check){
			cout<<i<<endl;
			break;
			
		}
		
		
	}
	
}
