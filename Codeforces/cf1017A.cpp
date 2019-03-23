// The Rank
//we have to find thomas rank among n students
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;

	int a,b,c,d,j,ans;
	int cnt=1;
	int g_sum;
	cin>>n;
	cin>>a>>b>>c>>d;
    int sum=a+b+c+d;

	for(int i=2;i<=n;i++){
		cin>>a>>b>>c>>d;
	    g_sum=a+b+c+d;
	    
	    if(g_sum>sum){    //initially sum is the max value which is the grade of thomas, if any value gretaer than sum is found then cnt++, means thomas positions will increased by one if any value more than thomas is found 
		    cnt++;
		}
	    
	}
	cout<<cnt<<endl;
	
	
}
