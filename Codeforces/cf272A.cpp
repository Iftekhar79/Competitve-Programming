// Dima and Friends

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	
	int a,sum=0;
	
	for(int i=0;i<n;i++){
		cin>>a;
		sum=sum+a;
		
	}
	
	int p;
	int cnt=0;
	
	//this loop will find how many fingers dim ashould show,as he should not be selected to do the task
	// loopng finger 1 to 5
	// total ==  sum + i-th finger
	// if the total modulo of n+1 if 1, that means now dima has to do the task, 
	//so rising that finger should not be a good idea, so dima will not rise that finger, 
	//total rising finger is counted by cnt, that means when those finger rise the total is modulo n+1 is not 1;
	
	for(int i=1;i<=5;i++){
		
		p=i+sum;
		
		if(p%(n+1)!=1){
			cnt++;
			
		}
		
	}
	
	cout<<cnt<<endl;
	
	
}
