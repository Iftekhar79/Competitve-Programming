//Friends Meeting

#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	int mid;
	int dif1,dif2;
	
	cin>>a>>b;
	
	if(a%2==0 && b%2==0){
		mid=(a+b)/2;
		}
		
	if(a%2==1 && b%2==1){
		mid=(a+b)/2;
		}
		
	if(a%2==0 && b%2==1){
		mid=(a+b)/2;
		}
		
	if(a%2==1 && b%2==0){
		mid=(a+b)/2;
		}

	
	
	
	dif1=abs(a-mid);
	dif2=abs(b-mid);
	int sum=0;
	
	for(int i=1;i<=dif1;i++){
		
		sum=sum+i;
		
	}	
	
	
	for(int i=1;i<=dif2;i++){
		
		sum=sum+i;
		
	}
	
	cout<<sum<<endl;
	
	
	
}
