// How cow
 
#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    int test;
    int x1,y1,x2,y2;
    int a,b;
   
    int m;
   
   
    cin>>test;
   
    for(int i=1;i<=test;i++){
       
        cin>>x1>>y1>>x2>>y2;
       
       
        cin>>m;
       
       
        cout<<"Case "<<i<<":"<<"\n";
       
        while(m--){
           
            cin>>a>>b;
           
           
            if((a>x1 && a<x2) && (b>y1 && b<y2)){
               
                cout<<"Yes"<<"\n";
               
            }
           
            else
            cout<<"No"<<"\n";
           
           
        }
       
    }
   
   
}
