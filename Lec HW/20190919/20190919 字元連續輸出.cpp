#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main(){
	char  c;
	
	printf("\n\tInput:");
	scanf("%c",&c);
	
	printf("\n\tOutput:");
	printf("\n\t%5s",std::string(1,c).c_str());
	printf("\n\t%6s",std::string(3,c).c_str());
	printf("\n\t%7s",std::string(5,c).c_str());
	printf("\n\t%8s",std::string(7,c).c_str());
	printf("\n\t%s\n",std::string(9,c).c_str());
	printf("\t\b%s",std::string(11,c).c_str());
	printf("\n\t%9s",std::string(9,c).c_str());
	printf("\n\t%5s",std::string(1,c).c_str());
	printf("\n\t%6s",std::string(3,c).c_str());
	return 0;
}

			
       
			

