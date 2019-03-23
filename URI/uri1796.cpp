//Brazilian Economy

#include<iostream>

using namespace std;

int main(){
	
	int test;
	int y=0,n=0;
	int num;
	
	cin>>test;
	
	while(test--){
		cin>>num;
		
		if(num==1){
			n++;
		}
		else if(num==0){
			y++;
		}
		
	}	
	
	
	if(y>n)
	cout<<"Y"<<endl;
	else
	cout<<"N"<<endl;
	
	
}
