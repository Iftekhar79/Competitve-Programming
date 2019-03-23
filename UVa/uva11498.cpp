// Division of Nlogonia

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int test;
	int a,b;
	int x,y;
	
	while(cin>>test){
		if(test==0)
		  break;
		 
		 cin>>a>>b;
		 
		 while(test--){
		 	
		 	cin>>x>>y;
		 	
		 	
		 	if(x==a || y==b || (x==a && y==b)){
		 		cout<<"divisa"<<endl;
		 		
			 }
			 
			 else if(x>a && y>b){
			 	cout<<"NE"<<endl;
			 	
			 }
			 
			 else if(x<a && y>b){
			 	cout<<"NO"<<endl;
			 	
			 }
			 
			 else if(x<a && y<b){
			 	cout<<"SO"<<endl;
			 	
			 }
			 
			 else if(x>a && y<b){
			 	cout<<"SE"<<endl;
			 	
			 }
		 	
		 } 
	 	  
		  
	   
		
	}
	
	
}
