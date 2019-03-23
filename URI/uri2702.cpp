//Hard Choice


#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a1,b1,c1,a2,b2,c2;
	int sum=0;
	
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	
	if(a2>a1){
		sum=sum+(a2-a1);
		
	}
	
		if(b2>b1){
		sum=sum+(b2-b1);
		
	}
	
		if(c2>c1){
		sum=sum+(c2-c1);
		
	}
	cout<<sum<<endl;
	
	
}
