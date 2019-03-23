//Feynman
//finding the total numebr of squraes in a N*N grid

#include<iostream>

using namespace std;

int main(){
	
	int n;
	
	
	while(cin>>n){
	
	if(n==0)
	break;
	int sum=0;
	

	
	for(int i=n;i>=1;--i){
		
		sum=sum+i*i;
	
	}
	cout<<sum<<endl;
  }
}
