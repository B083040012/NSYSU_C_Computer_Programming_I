#include<stdio.h>
#include<math.h>
#define sqrt2 1.41428
#define sqrt3 1.73205

int main(){
	
	float len, high, ba, sa, vol;
	printf("���:");
	scanf("%f",&len);
	
	high=len*sqrt2*sqrt3/3;
	printf("\n����:%.2f",high);
	
	ba=sqrt3/4*pow(len,2);
	printf("\n�����n:%.2f",ba);
	
	sa=4*ba;
	printf("\n���n:%.2f",sa);
	
	vol=ba*high/3;
	printf("\n��n:%.2f",vol);
	
	return 0;
}

