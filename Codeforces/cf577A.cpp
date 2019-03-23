#include<iostream>


using namespace std;

int main(){
	
	int t,num;
	int count=0;
	int i;
	int rem;
	
	
	cin>>t>>num;
	
	if(num<=t)
	count++;
	
	
	for(i=2;i<=t;i++){
         rem=num%i;
		if(rem==0 && num/i<=t)
		count++;
		
	}
	
	cout<<count<<endl;
	
	return 0;
	
}
