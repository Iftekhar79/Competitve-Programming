#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>
#include<string>
 
using namespace std;
 
int main(){
	char c = 'o';                        //initialize c so as to get into while loop
	string s, result = "";               //result holds the resulting string
	


		
		
	while(c != '\n'){          //cin reads the input string until the first whitespace is encountered,when found just make reverse of the input scanned string portion
		
		
		result += string(s.rbegin(), s.rend()) + " "; 
		  //rbegin() and rend() are the reverse iterator to reverse the string
		 //concatanate the reverse of s into the resulting 
		 //string with a whitespace
		
		
		c = getchar(); 		       //if c = '\n' terminate the while loop,if line ends it will break the loop
	
	
		cout  << result << endl;	//print the resulting string
	
	}
	
}

	
	
}
