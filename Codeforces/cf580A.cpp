#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int test;
	
	int cnt=1;//if arr[i+1] equal or grater the arr[i] then cnt will increment
	int nooct=1; //final result will be here 
	cin>>test;
	int arr[test];
	
	
	
	
	for(int i=0;i<test;i++){
	cin>>arr[i];
	
}

for(int i=0;i<test;i++){
	   if(i>0){
   
	   if(arr[i]>=arr[i-1] ){
	   
	   cnt++;     // if condition satisfy then cnt increments
	
		nooct=max(nooct,cnt);     //comparing if cnt is greater than nooct and assign value to nooct
		                       //noct brings the result
			}	
		
	
		else
		cnt=1;         //if it didnot satisfy the condition then the countdown will start from 1 again,
	}	           //from the root it will do the same process
		
		
	}
	
	
	cout<<nooct<<endl;
	
	
}
