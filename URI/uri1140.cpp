// Flowers Flourish from France
// Topic: Tautograms 

#include<bits/stdc++.h>
#include<set>

using namespace std;

int main(){
	
	string word;
	
	while(getline(cin,word) && word[0]!='*'){    // if we use onlyy ci then all words will be counted as input 
		

		set<char> myset;     // set takes only unique input
		stringstream ss(word);   // the stream of string named words
		
		while(ss>>word){
			
			myset.insert(tolower(word[0]));    //all words first character inserted as lower case in myset 
			
		}
		
		if(myset.size()==1)  {   //has only one unique character , as set takes only unique character
		
		cout<<"Y"<<endl;
	}
		else
		cout<<"N"<<endl;
		
		
		
	}
	
	
}
