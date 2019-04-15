// Uncowed Forces


#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int point[5]={500,1000,1500,2000,2500};
	
	int m[5];
	int w[5];
	int hs,hu;
	
	
	for(int i=0;i<5;i++){
		
		cin>>m[i];
		
	}
	
		
	for(int i=0;i<5;i++){
		
		cin>>w[i];
		
	}
	
	cin>>hs>>hu;
	
	
	double sum=0;
	
	for(int i=0;i<5;i++){
		
		sum= sum+ max(0.3*point[i],(1-(m[i]/250*1.0)*point[i]*1.0-50*w[i]*1.0));
		cout<<sum<<endl;
		
	}
	
	cout<<sum<<endl;
	
	
}
