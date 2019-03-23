//Police recruits

#include<iostream>

using namespace std;

int main(){
	
	int test;
	int num;
	int police=0,casee=0;
	
	cin>>test;
	
	
	while(test--){
		
		cin>>num;
		
		if(num>0)
		
		police=police+num;
		
		else if(num<0 && police>0)
		   police--;
		   
		   
	else
	casee++;
	
		
		
	}
	
	
	cout<<casee<<endl;
	
	
}
