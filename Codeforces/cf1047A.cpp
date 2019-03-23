//Little C Loves 3 I


#include<iostream>

using namespace std;

int main(){
	
	int n;
	
	int a,b,c;
	
	cin>>n;
	
	
	if(n%3==2){       //we should try not to make any of the value as 3 multiple
	 					// here, if a+b=3, which makes c%3==2,then all three numbers is not multiples of 3;
		a=1;
		b=2;
		c=n-3;
		cout<<a<<" "<<b<<" "<<c<<endl;
		
	}
	else if(n%3==1 || n%3==0)        // here,a+b=2,
									 // to avoid c ,as not multiple of 3, sum 2 is needed
	{
		a= 1;
		b=1;
		c=n-2;
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
		
	
}
	
	
	

