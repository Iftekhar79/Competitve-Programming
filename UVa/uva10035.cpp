//Primary arithmetic


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	 unsigned int a,b;
	
	int sum,count;
	
	while(cin>>a>>b){
		
		if(a==0 && b==0)
		break;
		
		sum=0,count=0;
		
		while(a||b){
			
			sum=((sum+(a%10)+(b%10))/10);
			a=a/10;
			b=b/10;
			
			count=count+sum;
			
			
		}
		
	 if(count==0)
            cout<<"No carry operation.\n";
        else if(count==1)
            cout<<"1 carry operation.\n";
		
		 else
		 cout<<count<<" carry operations.\n";
		
	}
	
	
}
