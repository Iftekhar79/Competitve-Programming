// Zero means Zero

#include<bits/stdc++.h>
#include<stack>

using namespace std;

int main(){
	
	long long int a,b,sum;
	
	while(cin>>a>>b){ // a>0 and b>0
		
	
		stack<int> mystack;
		
			if(a==0 && b==0)
		    break;
		
		sum=a+b;
		
		
		while(sum){  //sum>0
			
			if(sum%10)//if reminder is gretaer than 0
				
				mystack.push(sum%10);   //reminder will be at satck

				sum=sum/10;         //divide the sum by 10 every loop
				
			
		    
		}
		
		
		
		while(!mystack.empty()){
			
			cout<<mystack.top();    //ouput top element
			mystack.pop();      //after output pop it from stack, after pop next element will be at top
			
			
		}
		cout<<endl;
		
		
	}
	
	
	
}
