//Anton and Polyhedrons

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
	
	string s;
	
	
	int test;
	int sum=0;
	cin>>test;
	
	while(test--){
		cin>>s;
		
		if(s=="Tetrahedron"){	
		sum=sum+4;
	   }
	   
	   if(s=="Cube"){	
		sum=sum+6;
	   }
	   
	   if(s=="Octahedron"){	
		sum=sum+8;
	   }
	   
	   if(s=="Dodecahedron"){	
		sum=sum+12;
	   }
	   
	   if(s=="Icosahedron"){	
		sum=sum+20;
	   }
	
	}
	
	
	cout<<sum<<"\n";
	
	
}
