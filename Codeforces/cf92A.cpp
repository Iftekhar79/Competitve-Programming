//Chips

#include<iostream>

using namespace std;

int main(){
	
	int n,m;
	
	cin>>n>>m;	
	int i=1;
	
	while(1){
		
		
		if(i>m)
		break;
		
	
			m=m-i;
			
			if(i==n){
				i=1;
				i--;
		}	
	
			i++;
	}
	cout<<m<<endl;
	
	
}
