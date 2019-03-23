// He is Offside!

#include<bits/stdc++.h>

using namespace std;


int main(){

	int a,d;

	
	while(cin>>a>>d){
		if(a==0 && d==0)
		break;
		
		int arr1[a],arr2[d];		
		
		
		for(int i=0;i<a;i++){
			
				cin>>arr1[i];
				
			}
		for(int j=0;j<d;j++){
				
				cin>>arr2[j];
		
	}


			
			
	for(int i=0;i<a;i++){
			
	
		for(int j=0;j<d;j++){
				
				if(arr1[i]<arr2[j])
				cout<<"Y"<<endl;
				break;
				
		
	   }


  }
  
  		cout<<"N"<<endl;
  

			

}

}
