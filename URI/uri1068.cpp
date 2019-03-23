//Parenthesis balance 

#include<iostream>
#include<bits/stdc++.h>


using namespace std;


int main(){
	
	
	char arr[1001];
	
	
	
	while(scanf("%s",&arr)!=EOF){
		
		int left=0,right=0;
		
		for(int i=0;arr[i]!='\0';i++){
			
			if(arr[i]=='(')
			left++;
			
			else if(arr[i]==')'){
				
				right++;
				
				if(left>0){
					left--;
					right--;
					
				}
				
				
			}
		}
		
	if(left==0 && right==0)
	cout<<"correct"<<endl;
	
	else
	cout<<"incorrect"<<endl;
		
		
		
		
		
	}
	
}
