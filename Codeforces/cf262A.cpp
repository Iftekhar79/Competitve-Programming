// Roma and Lucky Numbers

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	int n,k;
	int num;
	
	
	cin>>n>>k;
	
	int w=0;            //number of lucky numbers whose lucky digits are not more than k digits
	
	
	
	for(int i=0;i<n;i++){
		
		cin>>num;
		
		int cnt=0;                   
		
		while(num>0){
			
			int rem=num%10;
			if(rem==4 || rem==7)     //in a given number count how many lucky numbers are there
			cnt++;
			num=num/10;
			
			
			    
			
		}
		if(cnt<=k)  //number of lucky digits 4 and 7 can not be more than k in a number 
			    w++;   //counting those type of numbers
		
	}
	
	
	cout<<w<<endl;
	
	
	
}
