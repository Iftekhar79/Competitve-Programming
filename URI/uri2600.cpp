#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int n,m;
	int test;
	int arr[6];
	cin>>test;
	
	while(test--){	
	
	for(int i=0;i<6;i++){
		cin>>arr[i];
		
	}
	
  sort(arr,arr+6);
  
	
	
    if((arr[0]+arr[5]==7) && (arr[1]+arr[4]==7) && (arr[2]+arr[3]==7)) {


	cout<<"SIM"<<endl;

	
  }	
  
     else
	cout<<"NAO"<<endl;
	
	
	
}
}
  


