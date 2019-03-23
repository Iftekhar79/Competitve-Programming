// International Chat

#include<bits/stdc++.h>
#include<iostream>
#include<set>

using namespace std;

int main(){
	
	int test,n;
	string s,temp;
	bool check;
	
	cin>>test;
	
	while(test--){
		check=true;   //initially true 
		
		cin>>n;
		
		for(int i=0;i<n;i++){
			
			cin>>s;
			
			if(i==0){
				temp=s;   //first string input is stored to compare with the next inputs
				
			}
			
			if(s!=temp){  // if any input is not matched with first input means the input languages are different
				
				check=false;
				
			}
			
			
		}
		
		if(check){    //if all input languages are same
			cout<<s<<endl;
		}
		
		else{
			cout<<"ingles"<<endl;   //if at least one language is different then it will be false
		}
		
		
	}
		


}
