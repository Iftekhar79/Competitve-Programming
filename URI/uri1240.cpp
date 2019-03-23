//Fit or Dont Fit I

#include<iostream>
#include<math.h>
using namespace std;


int CalculateB(int b){
	int count=0;
	
	while(b){
		
		b=b/10;
		count++;
		
	}
	
   	return count;
   	
}



int main(){
	
	int test;
	int a,b;
	
	cin>>test;
	
	while(test--){
		cin>>a>>b;
		
		int k=CalculateB(b);  //find count value from CalculateB function
		
		
		int y=ceil(pow(10,k));   // ceil gives round value of float,power(10,n),here n is count value
		
		if(a%y==b)
		cout<<"encaixa"<<endl;
		else 
		cout<<"nao encaixa"<<endl;
		
		
		
	}
	
	
}
