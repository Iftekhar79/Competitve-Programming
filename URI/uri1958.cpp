//Scientific Notation

#include<iostream>
#include<bits/stdc++.h>
//#include <stdio.h>

using namespace std;

int main() {
	
    long double num;
    char nota[110];
    scanf("%LE", &num);
    sprintf(nota,"%LE", num);
    if(nota[0] != '-') printf("+");
    
    
    printf("%.4LE\n",num);
    return 0;
}
