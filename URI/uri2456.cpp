// Cards

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	int arr[5];
	
	for(int i=0;i<5;i++){
		cin>>arr[i];
		
		
	}
	int cnt=1;
	int cnt1=1;
	
	for(int i=1;i<5;i++){
		
		if(arr[i]>arr[i-1]){
		
		   cnt++;
	     }
		 
		 else if(arr[i]<arr[i-1]){
		
		   cnt1++;
	     }
		  
		
	}
	if(cnt==5){
		cout<<"C"<<endl;
	}
		else if(cnt1==5){
			cout<<"D"<<endl;
			
		}
	else
	cout<<"N"<<endl;
	
	
}
