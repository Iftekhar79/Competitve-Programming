//Anton and Danik

#include<iostream>

using namespace std;


int main(){
	
	int test;
	int anton=0,danik=0;
	
	string s;
	
	
	cin>>test;
	cin>>s;
	
	for(int i=0;i<test;i++){
		
	
		
		if(s[i]=='A')
		anton++;
		else if(s[i]=='D')
		danik++;
		
		
	}
	
	if(anton>danik)
	cout<<"Anton"<<endl;
	
	else if(anton<danik)
	cout<<"Danik"<<endl;
	
	else 
	cout<<"Friendship"<<endl;
	
}

