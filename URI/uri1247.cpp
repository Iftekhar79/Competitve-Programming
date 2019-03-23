// Coast Guard

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int d,f,g,a=12;


	double hypotenuse, t_fugitive, t_guard;
	
	
	while(cin>>d>>f>>g){
		
		hypotenuse = (double)sqrt(d*d+144);   // distance covered by coast guard to catch the fugitive 
		t_fugitive =  (double) 12/f;   // time requred for fugitive
		t_guard =  (double) hypotenuse/g;       // time required for coast guard
		 
		if(t_guard <= t_fugitive){
			cout<<"S"<<endl;
		}
		
		else if(t_guard > t_fugitive)
		cout<<"N"<<endl;
		
	}
	
	
}
