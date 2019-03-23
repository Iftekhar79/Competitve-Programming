//Golden plate

#include<iostream>

using namespace std;

int main(){
	
	int w,h,k;
	cin>>w>>h>>k;
	
	int res=k*(w-(4*(k-1))+k-4*(k-1))-4;
	
	cout<<res<<endl;
	
}
