// Number Frequence

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
	int n;
	int num;
	int arr[2010]={0};
	cin>>n;
	
	
	
	
	for(int i=0;i<n;i++){
		cin>>num;
		arr[num]++;      // that array index value will be increased by 1 every time found it a value 
		
		
	}
	
	
	for(int j=1;j<=2001;j++){    //as there will be only positive integers
		
		if(arr[j]>0)
		cout<<j<<" aparece "<<arr[j]<<" vez(es)"<<endl;
		
		
		
	}
	
}
