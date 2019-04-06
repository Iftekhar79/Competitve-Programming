// Romaji

#include<bits/stdc++.h>

using namespace std;

bool vowel(char f){    // return 1 means vowel not found , so char is constant.

	if(f=='a' || f=='e' || f=='i' || f=='o' || f=='u')
	return 0;
	
	return 1;
	
}


int main(){
	
    char s[100];
  	cin>>s;
  
    
    for(int i=0;i<strlen(s);i++){
	
    	
    	if(vowel(s[i])  && s[i]!='n' && vowel(s[i+1]))   {   //constant, char not n, next char constant, 
    			cout<<"NO"<<endl;
    			return 0;
					
	
	}
}
	cout<<"YES"<<endl;
	
	
	
}
