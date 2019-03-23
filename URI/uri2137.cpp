// The Library of Mr. Severino

#include<bits/stdc++.h>

using namespace std;

int main(){
	
  char s[1000][4],temp[4];
  int n;
  
  cin>>n;
  
  for(int i=0;i<n;i++){
  	cin>>s[i];
  }

   
   
   
   for(int i=1;i<n;i++){
   	 
   	 for(int j=1;j<n;j++){
   	 	 
   	 	 if(strcmp(s[j-1],s[j])>0){
   	 	 	
   	 	 	  strcpy(temp,s[j-1]);
   	 	 	  strcpy(s[j-1],s[j]);
   	 	 	  strcpy(s[j],temp);
   	 	 	
			 }
   	 	
   	 	
		}
   }
   
   for(int i=0;i<n;i++){
   	cout<<s[i]<<endl;
   }
   
   

}
