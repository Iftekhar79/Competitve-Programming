//Sleuth


#include<bits/stdc++.h>

using namespace std;

int main(){
	
   string s, p="AEIOUYaeiouy";
   
   getline(cin,s);
   
   
   int len=s.length()-2;
   
   while(s[len]==' '){
   	    
		   len--;

   	
   	
   }
   
	   	
   	if((p.find(s[len]))==-1){
   		cout<<"NO"<<endl;
	   }
   	else
   	cout<<"YES"<<endl;
	
	
}
