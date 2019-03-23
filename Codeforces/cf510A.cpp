#include<iostream>
#include<bits/stdc++.h>
#include<string.h>


using namespace std;

int main(){
	
	int a,b;
	int cnt=0;
	
	cin>>a>>b;


	
     
     
     for(int i=1;i<=a;i++){
     	
     	if(i%2==1){
     		for(int p=1;p<=b;p++){
     			cout<<"#";
			 }
		 }
     	
     	
     	else if(i%2==0){
     		cnt++;
     		
     		for(int p=1;p<=b;p++){
     		
     		if(cnt%2==1 && p==b){
     		 cout<<"#";
			 }
			 
			 else if(cnt%2==0 && p==1){
			 	
			 cout<<"#";
			 
			 	
			 }#
			 
     		else{
			 
     		cout<<".";
     	       }
			 }
			 
		 }
     	
     	cout<<endl;
     	
	 }
	return 0;
	
}
