#include<iostream>
#include<bits/stdc++.h>
#include<string.h>


using namespace std;

int main(){
	
	int a,b;
	int cnt=1;
	
	cin>>a>>b;

	char str[b];
	
     
     
     for(int i=1;i<=a;i++){
     	if(i%2==1){
     		for(int p=0;p<b;p++){
     			cout<<"#";
			 }
		 }
     	
     	
     	else if(i%2==0){
     		for(int p=0;p<b;p++){
     		
     		if(cnt%2==1){
     			str[b-1]='#';
     			cout<<str[b-1];
			 }
			 
			 else if(cnt%2==0){
			 	
			 str[0]='#';
			 cout<<str[0];
			 
			 	
			 }
			 
     		else
     		cout<<".";
     		
			 }
			 
			 cnt++;
			 
		 }
     	
     	cout<<endl;
     	
	 }
	
}
