// Combiner


#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int test;
	string a,b;
	
	cin>>test;
	
	
	while(test--){
		
		cin>>a>>b;
		int i=0;
		
		int len1=a.length();
		
		int len2=b.length();
		
		int p=max(len1,len2); 
		
		
		for(int i=0;i<p;i++){
			
			if(i<len1)     // character of string will be printed one by one
			               // this condition means if small string is finished to print then the big string left characters will be printed and merged all
			cout<<a[i];
			 if(i<len2)
			cout<<b[i];
		
		}
		cout<<endl;
		
	}
	
	
}
