//Counting crow


#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){
	char arr[3];
	int sum;
	
	for(int i=0;i<3;i++){
		sum=0;
		
		while(1){
			
			gets(arr);
			if(arr[0]=='c')
			  break;
			  
			  
			
			if(arr[0]=='-'){
				
				if(arr[1]=='-'){
					
					if(arr[2]=='-')
					   sum+=0;
					   else if(arr[2]=='*')
					  sum+=1;
				}
				else if(arr[1]=='*'){
					if(arr[2]=='-')
					 sum+=2;
					 else if(arr[2]=='*')
					 sum+=3;
				}
			}
			
			else if(arr[0]=='*'){
				if(arr[1]=='-'){
					
					if(arr[2]=='-')
					   sum+=4;
					   else if(arr[2]=='*')
					  sum+=5;
				}
				else if(arr[1]=='*'){
					if(arr[2]=='-')
					 sum+=6;
					 else if(arr[2]=='*')
					 sum+=7;
				}
				
				
			}	
			
		}
		
		
		cout<<sum<<endl;
		
	}
		
}






































