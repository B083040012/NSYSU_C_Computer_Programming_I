#include<stdio.h>
#include<math.h>
#define sqrt2 1.41428
#define sqrt3 1.73205

int main(){
	//Exercise 1
	int T1h, T1m, T1s, T2h, T2m, T2s, T3, T3h, T3m, T3s; //宣告變數 
	scanf("%d:%d:%d",&T1h,&T1m,&T1s);					 //輸入T1時間 
	scanf("%d:%d:%d",&T2h,&T2m,&T2s);					 //輸入T2時間 
	
	T3=(3600*T2h+60*T2m+T2s)-(3600*T1h+60*T1m+T1s);		 //將T1,T2換算成秒單位並相減,存入T3 
	
	T3h=T3/3600;										 //換算T3時數 
	T3=T3%3600;
	
	T3m=T3/60;											 //換算T3分鐘數 
	T3s=T3%60;											 //換算T3秒數 
	
	printf("相差時間 %02d:%02d:%02d",T3h,T3m,T3s);
	
	printf("\n\n\n==============\n\n\n");
	
	//Exercise 2
	float len, high, ba, sa, vol;
	printf("邊長:");
	scanf("%f",&len);
	
	high=len*sqrt2*sqrt3/3;
	printf("\n高度:%.2f",high);
	
	ba=sqrt3/4*pow(len,2);
	printf("\n底面積:%.2f",ba);
	
	sa=4*ba;
	printf("\n表面積:%.2f",sa);
	
	vol=ba*high/3;
	printf("\n體積:%.2f",vol);
	return 0;
}

