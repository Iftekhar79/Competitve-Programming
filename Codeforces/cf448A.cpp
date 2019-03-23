// Rewards


#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int a1,a2,a3,b1,b2,b3;
	
	int n;
	
	cin>>a1>>a2>>a3>>b1>>b2>>b3;
	cin>>n;
	int cnt=0,c=0;
	
	int sum1=a1+a2+a3;
	int sum2=b1+b2+b3;
	
	
	
	while(sum1>0){
		sum1=sum1-5;
		cnt++;
		
	}
	
	while(sum2>0){
		sum2=sum2-10;
		c++;
		
	}
	
	int sum_res=cnt+c;
	
	if(n>=sum_res){
		cout<<"YES"<<endl;
	}
	else
	cout<<"NO"<<endl;
	
	
	
}
