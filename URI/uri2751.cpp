//Output 5

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	
	int a=15;
	int b=a/2;
	float c=15.456;
	float d=c/7;
	int p=d;
	
     cout<<"Valores de b:"<<endl;
     cout<<"-------------"<<endl;
     cout<<"1) b = "<<b<<endl;
     cout<<"2) b =                    "<<b<<endl;
	 cout<<"3) b = 00000000000000000007"<<endl;
	 cout<<"4) b = "<<b<<"                   "<<endl;
	 cout<<"5) b = "<<b<<"%"<<endl<<endl;
	 
	 
	 cout<<"Valores de d:"<<endl;
     cout<<"-------------"<<endl;
	 printf("1) d = %f\n",d);
	 printf("2) d = %d\n",p);
	 printf("3) d = %.1f\n",d);
	 printf("4) d = %.2f\n",d);
	 printf("5) d = %.3f\n",d);
	 printf("6) d =                %.3f\n",d);
	 printf("7) d = 000000000000000%.3f\n",d);
	 printf("8) d = %.3f               \n",d);
	 printf("9) d = %.2f%%\n",d);
	 
	 
	
	
}
