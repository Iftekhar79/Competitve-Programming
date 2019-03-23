//The Change

#include<iostream>

using namespace std;


int main(){
	
	int t;
	
	while(cin>>t){
		
		if(t==360 || (t>=0 && t<90)){
			cout<<"Bom Dia!!"<<endl;
			
		}
		
		
		if(t>=90 && t<180){
			cout<<"Boa Tarde!!"<<endl;
			
		}
		
		if(t>=180 && t<270){
			cout<<"Boa Noite!!"<<endl;
			
			
		}
		
			if(t>=270 && t<360){
			cout<<"De Madrugada!!"<<endl;
			
			
		}
		
		
	}
	
	
	
}
