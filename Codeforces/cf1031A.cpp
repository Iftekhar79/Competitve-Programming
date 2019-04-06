//Golden plate

#include<iostream>

using namespace std;

int main(){
	
	int w,h,k;
	cin>>w>>h>>k;
	
	int sum=0;
	
    for(int i=0;i<k;i++){
    	
    	sum=sum+(2*((w-i*4)+(h-i*4))-4);
    	
    	
    	
	}
	
	cout<<sum<<endl;
	
}
