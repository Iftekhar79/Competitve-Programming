// Huaauhahhuahau

#include<bits/stdc++.h>
#include<string.h>
using namespace std;


int main(){
	
	char s[51],rs[51];   //s is given string, rs is the string with vowels
	
	
	scanf("%s",s);
	
	int j=0;       //for char s[] should use strlen(string_name), else string_name.length()
	
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
			
			rs[j]=s[i];      
			j++;
		}
		
	}
	
	rs[j]='\0';
	
	int len=strlen(rs);    //length of rs
	
	for(int m=0,n=len-1;m<len;m++,n--){   
		if(rs[m] != rs[n]){       //if any mismatch occurs with reverse arra
		
		cout<<"N"<<endl;
		return 0;
	   }
	}
	
	cout<<"S"<<endl;
	
	
}
