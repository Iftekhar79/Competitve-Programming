//Moon phases

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b;
	
	
	cin>>a>>b;  //here a(before 2 days ago moon observation) is not major
	
	//,b(observation moon 1 days ago) is major
	//what we saw yesterday(which is b) is the main fact
	
	
	
	if((b>=0 && b<=2))   //in this area is new moon
	cout<<"nova"<<endl;
	
	
	
	else if((b>=97 && b<=100))  //full moon 
	cout<<"cheia"<<endl;
	
	else if((b>=3 && b<=96) &&  b>a)   //cresent moon could be increasing or waning, if b>a(last day observed moon was bigger)
	// then increasing
	cout<<"crescente"<<endl;
	
	else if( (b>=3 && b<=96) && b<a)   //here b<a so the last day we observed moon is smaller,so it's waning
	cout<<"minguante"<<endl;
	
	
	
}
