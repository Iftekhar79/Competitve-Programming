// Cableway

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int r,g,b;
	
	int arr[10000];
	
	for(int i=0;i<3;i++){
		
		cin>>arr[i];
		
		
	}
	
	int j;
	for( j=0;;j++){
		
		arr[j%3]=arr[j%3]-2;    //after increasing j and finding everytime j%3 means after every 3 times if starts from 0 and goes to 2. 
		                         //after 3 values it repeats from the start.
		
		
		if(arr[0]<=0 && arr[1]<=0 && arr[2]<=0)        //when all values is less than or equal to zero.
		break;
		
	}
	
	cout<<30+j<<endl;
	
}
