// Calm Down
 
#include<bits/stdc++.h>
#include<cmath>
#include<iostream>
 
using namespace std;
 
int main(){
   
    double pi=2*acos(0.0);
   
    int test;
    double R,n;
   
    cin>>test;
   
   
    for(int i=1;i<=test;i++){
       
        cin>>R>>n;
       
        double res=(sin(pi/n)*R)/(1+sin(pi/n));
       
        cout<<setprecision(10)<<"Case "<<i<<": "<<res<<endl;
       
       
       
    }
   
   
   
   
}
