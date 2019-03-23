//Soft Drinking

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,k,l,c,d,p,nl,np;
	
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	
	
	int toast1=(k*l)/nl;   //here n1 is used as to make a toast total mililiter/mililiter used 
	int toast2=c*d;    // c lemon , each has d slice , total c*d slice , each slice for a toast
	int toast3=p/np;    //total p gram salt/ np(need for one toast)
	
	int y=min(toast1,toast2);    //min finding
	
	int res=(min(y,toast3))/n;   // dividing by n because each group has n friend , we have to find min toast made by 
	                               //each friend
	
	cout<<res<<endl;
	
	
	
}
