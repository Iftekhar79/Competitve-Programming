//Parenthesis Balance 

#include<iostream>
#include<bits/stdc++.h>
#include<stack>


using namespace std;

int main(){
	  
	  int test;
	  cin>>test;
	  getc(stdin);
	  
	  while(test--){
	  	char s[130];
	  	stack<char> p;
	  	
	  	
	  	gets(s);
	  	
	  	
	  	int len=strlen(s);
	  	int k=0;
	  	
	  	
	  	for(int i=0;i<len;i++) {
	  		
	  		if(s[i]=='(' || s[i]=='['){   //staring parenthesis puushed to satck
	  			p.push(s[i]);
	  			
	
			  }
	  			
	  	else if( s[i]==')' && !p.empty() && p.top()=='('){    //(i)if closing first bracket parenthesis came to stack ,
		                                // check if the stack is empty or not ,
		                             //(ii)of not empty is proved then also check (iii)last top element of stack 
									 //is equal to closing parenthesis , if matches then
		                         // action: pop out tha last stack top element 
		   
	  			p.pop();	
	  				
				  }
	  		
	  			
	  	else if(s[i]==']' && !p.empty() && p.top()=='['){        //same procedure for second closing parenthesis
	  				
	  				p.pop();
				
				  }
				  
				  
	  			else k=1;    // it ensures that no conditions is applicable excepts these mention three if else condition
	  			
	  			

		  }
		  
		  
	  	
	  	if(p.empty() && k==0)
	  	cout<<"Yes"<<endl;
	  	
	  	else
	  	cout<<"No"<<endl;
	  	
	  	
	  }	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

