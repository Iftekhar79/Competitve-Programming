//  Friends Meeting

#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int a,b;
	cin>>a>>b;
	int sum1=0;
	int sum2=0;
	int p=1,q=1;
	
	for(int i=a,j=b;;i++){
		
		if(i==j)
		break;
		
		sum1=sum1+p;
		p++;
		j--;
		sum2=sum2+q;
		q++;
	}
	
	int sum=sum1+sum2;
	
	cout<<sum<<endl;
	
	
	
}
