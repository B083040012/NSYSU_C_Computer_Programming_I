#include<stdio.h>

int main(){
	int T1h, T1m, T1s, T2h, T2m, T2s, T3, T3h, T3m, T3s; //�ŧi�ܼ� 
	scanf("%d:%d:%d",&T1h,&T1m,&T1s);					 //��JT1�ɶ� 
	scanf("%d:%d:%d",&T2h,&T2m,&T2s);					 //��JT2�ɶ� 
	
	T3=(3600*T2h+60*T2m+T2s)-(3600*T1h+60*T1m+T1s);		 //�NT1,T2���⦨����ì۴�,�s�JT3 
	
	T3h=T3/3600;										 //����T3�ɼ� 
	T3=T3%3600;
	
	T3m=T3/60;											 //����T3������ 
	T3s=T3%60;											 //����T3��� 
	
	printf("�ۮt�ɶ� %02d:%02d:%02d",T3h,T3m,T3s);
	return 0;
}

