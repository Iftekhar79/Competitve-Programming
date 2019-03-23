//Fingerprints

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int a[10];
	int b[10];
	
	
	int n,m;
	
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int j=0;j<m;j++){
		cin>>b[j];
	}
	
	
	sort(b,b+m);
	
   for(int i=0;i<n;i++){
   	
   	   for(int j=0;j<m;j++){
   	   	    
   	   	    if(a[i]==b[j]){
   	   	    	cout<<a[i]<<" ";
				  }
   	   	
		  }
   	
   }
   cout<<endl;
   
   
}
