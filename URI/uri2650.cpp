//Building walls


#include<iostream>

using namespace std;

int main(){
	
	int value,test,limit;
	char str[100];
	
	cin>>test>>limit;
	
	while(test--){
		
		for(int i=0;i<100;i++){
			cin>>str[i];
			
		}
		
		cin>>value;
		
		
		if(value>limit){
			cout<<str<<endl;
			
		}
		
	}
	return 0;
	
	
}
