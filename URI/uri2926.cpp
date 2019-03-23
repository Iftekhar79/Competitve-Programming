// So This is Christmas!

#include<bits/stdc++.h>

using namespace std;


int main(){
	string s1="Entao eh Natal!";
	char s2[4000];
	char s3[100];
	
	int n,i,p,k;
	
	cin>>n;
	
	
	int len=s1.length();


	
	for( i=0,p=0;i<len;i++,p++){
		
		if(s1[i]=='a'){
			
			
			for(int p=0;p<n;p++){
				s2[p]='a';
			}
			
		
       	}
	
         else{	 
         s2[p]=s1[i];
		}
		
    }
	

	  s2[p] = '\0';
	 printf("%s\n",s2); 
	
}
