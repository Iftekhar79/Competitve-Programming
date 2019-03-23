#include<iostream>

using namespace std;


int main(){
	
	char a,b;
	int green=0,red=0,blue=0;
	
	int test;
	cin>>test;
	
	while(test--){
		
		cin>>a>>b;
		
		if(a=='R')
		red++;
		else if(a=='G')
		green++;
		else if(a=='B')
		blue++;
		
	}
	
	if(red==green==blue){
		cout<<"trempate"<<endl;
		
	}
	
		 if(red==green || red==blue || green==blue){
		cout<<"empate"<<endl;
		
	}
	
	if(1){
	
		if(red>green && red>blue){
			cout<<"red"<<endl;
			
		}
		
			 if(green>red && green>blue){
			cout<<"green"<<endl;
			
		}
		
		 if(blue>red && blue>green){
			cout<<"blue"<<endl;
			
		}
	}
	
	
}
