//Crazy computer

#include<iostream>

using namespace std;

int main(){
	
	
	int n;
	int c;
     int cnt=1;
	
	cin>>n>>c;
	int val[n];
	
	for(int i=0;i<n;i++){
		cin>>val[i];
		
	}
	
	
	for(int i=1;i<n;i++){
		if(val[i]-val[i-1]<=c){
		
		cnt++;
		}
		else
		cnt=1;
		
		
	}
	
	cout<<cnt<<endl;

	
	
}
