//Fire Flowers

#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
	
	int r1,x1,y1,r2,x2,y2;
	int p,q,r,s;
	float distance;
	
	
	while(cin>>r1>>x1>>y1>>r2>>x2>>y2){
		
		distance=sqrt((pow((x1-x2),2))+(pow(y1-y2,2)));  //find the distance between the two circles the hunter and 
		                                                 //flower area circle
		
		if(r1-distance>=r2)   // after finding the distance between two circle center. if the circle radius of the hunter
		                    // and the distance difference it greater than or equal to  r2 then flower area(r2 radius) is
							  // in r1 radius circle of hunter 
		cout<<"RICO"<<endl;
		else 
		cout<<"MORTO"<<endl;
		
		
		
	}
	
}
