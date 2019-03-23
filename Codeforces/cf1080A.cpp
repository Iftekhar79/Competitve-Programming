//Petya and Origami

#include<iostream>

using namespace std;

int main(){
	
	int n,k;
	
	
	cin>>n>>k;


    int red,green,blue;
    int ans=0;
    
    
    red=n*2;
    green=n*5;
    blue=n*8;
    
    ans+=red/k;
    ans+=green/k;
	ans+=blue/k;
	
	if(red%k!=0)ans++;
	if(green%k!=0)ans++;
	if(blue%k!=0)ans++;
	
	cout<<ans<<endl;
	
	
}
