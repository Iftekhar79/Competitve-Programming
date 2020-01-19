//greatest common divisor
//finding the summation value of G where N number of value common divisor sum 

#include<iostream>

using namespace std;


int GCD(int a,int b);


int main(){
	int g;
	int N;
	int a,b;
	
	while(cin>>N){
	
	if(N==0)
	break;
	   
	   g=0;
	   
	
	for(int n=1;n<N;n++){
		for(int m=n+1;m<=N;m++){
			g=g+GCD(n,m);
			
		}
	}
	cout<<g<<endl;
}
	
	
}



int GCD(int a,int b){

   if(b==0)
   return a;
   else
   return GCD(b,a%b);
   
	
	

	
}
