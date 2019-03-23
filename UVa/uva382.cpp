//Perfection,find perfect number(sum of it's all proper divisors is equal to the number)
//deficient(sum of it's all proper divisors is less then the number)
//abundant(sum of it's all proper divisors is greater then number)


#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int num;
	
	cout<<"PERFECTION OUTPUT"<<endl;
	
	
	while(cin>>num){
		if(num==0){
	
		break;
	}
		int sum=0;
		
		for(int i=1;i<num;i++){
			if(num%i==0)
			sum=sum+i;
			
		}
		
		
		if(sum==num){
		printf("%5d",num);
		cout<<"  PERFECT"<<endl;
		}
		else if(sum<num){
		printf("%5d",num);
		cout<<"  DEFICIENT"<<endl;
		}
		else if(sum>num){
		printf("%5d",num);
		cout<<"  ABUNDANT"<<endl;
	}
		
	}
		
		cout<<"END OF OUTPUT"<<endl;
	
	
}
