#include<stdio.h>
#include<math.h>
#define sqrt2 1.41428
#define sqrt3 1.73205

int main(){
	//Exercise 1
	int T1h, T1m, T1s, T2h, T2m, T2s, T3, T3h, T3m, T3s; //�ŧi�ܼ� 
	scanf("%d:%d:%d",&T1h,&T1m,&T1s);					 //��JT1�ɶ� 
	scanf("%d:%d:%d",&T2h,&T2m,&T2s);					 //��JT2�ɶ� 
	
	T3=(3600*T2h+60*T2m+T2s)-(3600*T1h+60*T1m+T1s);		 //�NT1,T2���⦨����ì۴�,�s�JT3 
	
	T3h=T3/3600;										 //����T3�ɼ� 
	T3=T3%3600;
	
	T3m=T3/60;											 //����T3������ 
	T3s=T3%60;											 //����T3��� 
	
	printf("�ۮt�ɶ� %02d:%02d:%02d",T3h,T3m,T3s);
	
	printf("\n\n\n==============\n\n\n");
	
	//Exercise 2
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

