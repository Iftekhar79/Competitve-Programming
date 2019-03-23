//Scientific Notation

#include<iostream>
#include<bits/stdc++.h>
#include <stdio.h>

using namespace std;
int main() {
	
    long double num;
    char nota[120];
    scanf("%LE", &num);
    sprintf(nota,"%LE", num);
    if(nota[0] == '+') printf("+");
    else 
    printf("-");
    printf("%.4LE\n", X);
    return 0;
}
