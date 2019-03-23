// Grace Hopper, Grandma of Cobol

#include<bits/stdc++.h>
#include<string>
#include<iostream>

using namespace std;

string removeZero(string str) 
{ 
    // Count trailing zeros 
    int i = 0; 
    while (str[i] == '0') 
       i++; 
  
    // The erase function removes i characters 
    // from given index (0 here) 
    str.erase(0, i); 
  
    return str; 
}
int main(){
	

	 string str;
      cin>>str;
      str=removeZero(str);
      cout<<str<<endl;
}
