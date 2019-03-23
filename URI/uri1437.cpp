#include<iostream>

using namespace std;

int main(){
	
	int test;
	int rigth,left;
	char arr[1000];
	int d=0,e=0;
	while(cin>>test){
		if(test==0)
		break;
		
		cin>>arr;
		
		for(int i=0;i<test;i++){
			
			if(arr[i]=='D')
			d++;
			
			else if(arr[i]=='E')
			 e++;
			 
		}
		
		
		if(d>e){
		  right=d;
		}
		
	    else{
	    	left=e;
	    	
		}
		
		
		
		if(left%4==0 || d%4==0){
			cout<<"N"<<endl;
			
		}
		
		
		
			else if(left%2==0 || d%2==0){
			cout<<"S"<<endl;
			
		}
		
		
		
			else if(left%4==1 || d%4==3){
			cout<<"O"<<endl;
			
		}
		
		
			else if(left%4==3 || d%1==0){
			cout<<"L"<<endl;
			
		}
		
	}
	
	
}
