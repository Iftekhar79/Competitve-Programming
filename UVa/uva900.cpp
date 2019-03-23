//brick patterns

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
long long int num,z;
   
   while(cin>>num){
   if(num==0) 
    break;

   long long int x=0,y=1,z=0;
    int i;
for(i=1;i<=num;i++){
   z=x+y;
   x=y;  
   y=z;
   }  


  printf("%lld\n",z);
}
return 0;
}
