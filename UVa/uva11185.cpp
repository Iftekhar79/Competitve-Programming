//Ternary

#include<iostream>
#include<bits/stdc++.h>



using namespace std;

int main(){
	
	long int arr[100];
	
	int i;
	
	int n;
	int rem;
	int div;
	
	while(cin>>n){
		
		if(n<0)
		break;
		
		
		for(i=0;;i++){
			
			rem=n%3;
			arr[i]=rem;
			
			n=n/3;
			
			if(n==0)
			break;
			
			
			
		}
		
		
		for(int k=i;k>=0;k--){
			
			cout<<arr[k];
			
			
		}
		
		
		cout<<endl;
		
	}
	
}
