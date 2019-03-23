//Love triangle

#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int main(){
	
	int n;
	cin>>n;
	int arr[n];
	
	
	
	for(int i=1;i<=n;i++){
		
		cin>>arr[i];
		
	}
	
	
	for(int i=1;i<=n;i++){
		
		if(arr[arr[arr[i]]]==i){                  //i value gives inner arr[i] to the next postion, then arr[i] value gives next arr[i] ->the i value, then the next arr[i] founds its i value form inner arr[i] value....
													// arr[i] gives the next array positional value where i gives the array index 
													//so it means, i gives array index and arr[i] gives the value . after three arr[i] functions if it returns to the initial i index value then it is a love triangle 
													//in this problem initially is starts from 1, then arr[1] gives index value arr[1]==2,then arr[2] index gives value==4,then finally arr[4] gives value 1.
													// here start from i==1 we ends where value is 1 after 3 functions love triangle to meet each index by their value and so on.....
		cout<<"YES"<<endl;
		return 0;
	}
		
		
	}
	
		cout<<"NO"<<endl;
	
	
}
