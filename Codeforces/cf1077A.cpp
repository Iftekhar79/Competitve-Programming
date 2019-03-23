//Frog Jumping

#include<iostream>

using namespace std;

int main(){
	
	long long int a,b,k;
	long long int res;
	
	int test;
	
  cin>>test;
  
	
	while(test--){
	          
			cin>>a>>b>>k;
			
			if(k%2==1)
			 res=(((k/2)+1)*a)-((k/2)*b);
			  
			  else
			  res=(k/2)*a-(k/2)*b;
			  
			   cout<<res<<endl;
			   
			  	
	}
	
	
}
