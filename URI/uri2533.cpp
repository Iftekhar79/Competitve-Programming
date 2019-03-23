//Internship

#include<iostream>


using namespace std;

int main(){
	
	int test;
	int a,b;
	float multiply,sum;
	

	
	while(cin>>test){
       
	    multiply=0,sum=0;
     
        while(test--){
		

		   cin>>a>>b;
		
		multiply=multiply+(a*b);
		 sum=sum+b;
		
		
	     }
	
	sum=sum*100;
	
	float res=multiply/sum;
	
	printf("%.4f\n",res);
    
	
	}
	
	
	
	
}
