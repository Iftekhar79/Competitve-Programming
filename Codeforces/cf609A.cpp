//USB flash drive

#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstring>


using namespace std;


int main()
{
	
	int cnt=0;
    int arr[100];
    int g,n,p;
	cin>>g>>n;
	
    for(int i=0;i<g;i++){
    	cin>>arr[i];
    	
	}
	
	sort(arr,arr+g);

	
	
	for(int i=g-1;i>=0;--i){
		n=n-arr[i];
		p--;
		cnt++;
		
		if(n>0)
		break;
	}

	cout<<cnt<<endl;
	
	return 0;
}
