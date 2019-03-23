// Call list
//strcmp("a", "a"); // returns 0 as ASCII value of "a" and "a" are same i.e (97)
//strcmp("a", "b"); // returns -1 as ASCII value of "a" (97) is less than "b" (98)
//strcmp("a", "c"); // returns -1 as ASCII value of "a" (97) is less than "c" (99)
//strcmp("z", "d"); // returns 1 as ASCII value of "z" (122) is greater than "d" (100)
//strcmp("abc", "abe"); // returns -1 as ASCII value of "c" (99) is less than "e" (101)
//strcmp("apples", "apple"); // returns 1 as ASCII value of "s" (115) is greater than "\0" (101)


#include<bits/stdc++.h>

using namespace std;

int main(){
	
    char s[100][100],temp[100];
    int n,search;
	cin>>n>>search;
	
	for(int i=0;i<n;i++){
		
		cin>>s[i];

	}
	
	
	for(int i=1;i<n;i++){   //there would be n-1 comparable pairs
		
		for(int j=1;j<n;j++){    //start form the 2nd string
			
			if(strcmp(s[j-1],s[j])>0){    // if output is greater than 0 means, if output is one then, string a is greater than b , if it happens then we should swap them 
				
				strcpy(temp,s[j-1]);
				strcpy(s[j-1],s[j]);
				strcpy(s[j],temp);
			}
			
			
		}
		
	}
	
	//after this loop all inputted strings are sorted.
	
	
	
	for(int i=0;i<n;i++){
		
		cout<<s[search-1]<<endl;       
		break;
		
	}
}
