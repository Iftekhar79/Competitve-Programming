//Presents 

//this problem is difficult to understand
//number of frineds of petya -> n is given here
// for first test case 4 frineds is given and the count of friends serial starts from 1 to n,
//here count is serial=1,2,3,4 .this is frined's serial of petya .there are values p=2,3,4,1,
//So, arr[i]=given value of p.    the positions of p values are: arr[0]=2,arr[1]=3,arr[2]=4,arr[3]=1,
// so starting from first friend which serial is p=1. so, in all p values if the value of p located in arr[i] is
// equal to frineds serial 1 ,then value will be i+1;

// in simmilar way next friend serial is p=2, the value p is found in arr[i], so,the result will be i+1;

//here the main logic is  the serial i(which is  1,2,3,4) is given gift to the friend arr[i] whose array 
//value is exactly same with the frineds serial value


//So, we can say,  serial of any of it's frineds position equal to the arr[i] value , then this serial friend
// give only one gift to arr[i] position friend  the total gifts will be 
//it's i value and adding one more gift which equal to i+1


 
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int arr[100];  // defining size of an array
	int n;
	cin>>n;
	
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	
	for(int p=1;p<=n;p++){
		
		for(int i=0;i<n;i++){
			
			if(arr[i]==p){			
			   
			   cout<<i+1<<" ";
			   break;
		}
			   
		}
	}
	
}
