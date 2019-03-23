//Taymyr is calling you

#include<iostream>


using namespace std;

int main(){
	
	int n,m,z;
	int val;
	
	cin>>n>>m>>z;
	
	int max;
	
	if(n>m){
		max=n;
	}
	
	else
	  max=m;
	  
	  do{
	  	if(max%n==0 && max%m==0){
	  		
	  		val=max;
	  		break;
	  		
	  		
		  }
	  	else
	  	max++;
	  	
	  	
	  }
	  
	  while(true);
	int res=z/val;
	cout<<res<<endl;
	
	
}
