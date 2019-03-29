// Vladik and Courtesy

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b;
	
	cin>>a>>b;
	
	
	int cnt=0;
	
	while(a>=0 && b>=0){   //if any of them is less than or eaual to zero ,
					    	//then means output is already printed then the loop will be stopped
		
		if(cnt%2==1){
			a=a-cnt;   // all odd number 1,3,,5,7,9..... will be subtracted 
			
			if(a<0){     //  failed to give the perfect amount of candy is the result
				
				cout<<"Vladik"<<endl;
				
			}
		}
		else{
			
			b=b-cnt;  // all even number 2,4,6,8,10....... will be subtracted 
			
			if(b<0){
				cout<<"Valera"<<endl;
				
			}
		}
		
	cnt++;
		
	}
	
}
