// Automated Checking Machine

#include<bits/stdc++.h>

using namespace std;

int main(){
	

	int i,j;
	int test=0;
	
	
	int arr1[5],arr2[5];
	
	
	
	for( i=0;i<5;i++){
		
		cin>>arr1[i];
		
	}
	
	
	for( j=0;j<5;j++){
		
		cin>>arr2[j];
		
	}
	
	bool res=true;
	
	
	while(test<5){    // test value is indicating the array positions
		
		if(arr1[test]==arr2[test]){
			res=false;
			break;
			
		}
	 test++;
	 	
	}
	
	
   if(res)  // it means if res is true
   	cout<<"Y"<<endl;

  else 
  cout<<"N"<<endl;
  
	
	
	
	
}
