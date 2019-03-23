//FIle name

#include<iostream>
#include<string>
using namespace std;

int main(){
	
	char s[100];
	
	int n;
	int cnt=0;
	
	cin>>n;     //size of the string should be considered
	cin>>s;   //scanning s as input
	
	
	
	
	for(int i=0;i<n-2;i++){
		
		if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x' )   //checking every 3 size sub string , and delete every 1 'x' charater 
		                                                // counting it on cnt
		cnt++;
		
	}
	
	

	cout<<cnt<<endl;
		
	
	
}
