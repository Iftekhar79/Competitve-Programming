//Sonya and hotels


#include<iostream>

using namespace std;



int main(){
	
	int n,m;
	int cnt;
	
	cin>>n>>m;
	int arr[n];
	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
	
	}
	
	for(int i=1;i<n;i++){
		
		if(arr[i]-arr[i-1]==2*m  )
	   cnt++;
	   
	   else if(arr[i]-arr[i-1]>2*m)
	   cnt=cnt+2;
	   
	}
	
	
	cout<<cnt<<endl;
	
}
