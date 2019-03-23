//Black Square

#include<iostream>
#include<bits/stdc++.h>
#include<string.h>


using namespace std;

int main(){
   
   int arr[4];
   
   for(int i=0;i<4;i++){
   	cin>>arr[i];
   	
   }
   
   string str;
   int sum=0;
   cin>>str;
   
   int len=str.length();
   
   
   for(int i=0;i<len;i++){
   	    
   	   int pos=str[i]-'0';
   	   
   	   sum=sum+arr[pos-1];
   	   
   }	
	cout<<sum<<endl;
	return 0;
	
}
