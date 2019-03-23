//Output 6

#include<iostream>
#include<stdio.h>


using namespace std;

int main(){
	
	string str;
	str="AMO FAZER EXERCICIO NO URI";
	
	
	printf("<% s>\n",str.c_str());
	printf("<% 30s>\n",str.c_str());
	printf("<% .20s>\n",str.c_str());
	printf("<% -20s>\n",str.c_str());
	printf("<% -30s>\n",str.c_str());
	printf("<% .30s>\n",str.c_str());
	printf("<% 30.20s>\n",str.c_str());
	printf("<% -30.20s>\n",str.c_str());
	

}
