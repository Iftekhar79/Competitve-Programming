//Koch Snowflake


#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	double a;
	double area;
	
	while(cin>>a){
		
		area=(a*a)*(sqrt(3)/4.00);
		
		printf("%.2f\n",area*1.6);
		
	}
	
}
