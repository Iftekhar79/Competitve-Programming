//Team olympiad

#include<iostream>
#include<bits/stdc++.h>
#include<queue>


using namespace std;


queue<int> a,b,c;


int main(){
	
  int cnta=0,cntb=0,cntc=0;
  
  int num;
  
  
  int n;
  
  cin>>n;
  
  for(int i=1;i<=n;i++){
  	
  	cin>>num;
  
  if(num==1){
  	cnta++;
  	a.push(i);
  }
  
  if(num==2){
  	cntb++;
  	b.push(i);
  }
  
  if(num==3){
  	cntc++;
  	c.push(i);
  }
  	
  }
  
  
  int minii=min(cnta,min(cntb,cntc));
  cout<<minii<<endl;
  
  
  while(minii--){
  	
  	cout<<a.front()<<" "<<b.front()<<" "<<c.front()<<endl;
  	
  	a.pop();
  	b.pop();
  	c.pop();
  }
  
		
}
