// Stutterer Digitizer


#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	getline(cin,s);    // get a string line
	stringstream f(s);   //get a string stream of string words
	
	string word;

	int cnt=1;
	
	while(f>>word){      // puts words in string stream
		
		if(cnt++!=1)          //after one word in every time of a word after rounding the loop,will be make a break 
		cout<<" ";
		
		if(word.length() < 3){      // length less than can not full fill the condition
			
			cout<<word;
		
		
	}
		
		else {
			
			if(word[0]==word[2] && word[1]==word[3]){
				
				for(int i=2;i<word.length();i++){      //first two alphabets are eliminating as they are copied in third and fourth
					cout<<word[i];
				}
			}
			
			else
			cout<<word;
		}
		
		
	
		
	}
	
	
		
		cout<<endl;            
		
		
}
