// Rot13
// we will check each charater whether it is less than character  N/ or less than character n
// if less than N or n then s[i]+=13 , else s[i]=((s[i]+13)-26) for both cases

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	char s[1000];
	int len,i;
	
	while(gets(s)!=NULL){
		
		 len=strlen(s);
		
		for(i=0;i<len;i++){
			
			if(s[i]>='A' && s[i]<='Z'){
				
				if(s[i]<'N'){
					
					s[i]=s[i]+13;
					
				}
				
				
				else {
					
				s[i]=((s[i]+13)-26);	
					
				}
				
				
			}
	
	
	    else if(s[i]>='a' && s[i]<='z'){
				
					if(s[i]<'n'){
					
					s[i]=s[i]+13;
					
				}
				
				
				else {
					
				s[i]=((s[i]+13)-26);	
					
				}
				
				
				
				
			}
			
			
			
		}
		
		
		cout<<s<<endl;
		
		
	}
	
	
	
}
