// Greg's Workout


#include<iostream>

using namespace std;

int main(){
	
	int point;
	
	int chest=0,bicep=0,back=0;
	int n;
	cin>>n;
	
	
	
	for(int i=1;i<=n;i++){
		cin>>point;
		
		if(i%3==1)
		chest=chest+point;
		else if(i%3==2)
		bicep=bicep+point;
		
		else if(i%3==0)
		back=back+point;
		
	}
	
	int res=max(chest,max(bicep,back));
	
	if(res==chest)
	cout<<"chest"<<endl;
	else if(res==bicep)
	cout<<"biceps"<<endl;
	else if(res==back)
	cout<<"back"<<endl;
	
	
	
}
