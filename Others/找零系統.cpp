#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
#include<iostream>
using namespace std;

int main(){
		int price, number, cost, money, charge, a, b;
		UINT input;
	
		printf("\t\t歡迎來到找錢系統!!\n");
	

		printf("\t單價:");
		cin>>price;
		if(cin.fail()){
		input=MessageBox(NULL,TEXT("輸入有誤，請輸入數字"),TEXT("OOPS!"),MB_OK==IDOK);
		}
			if(input==IDOK) return 0;
		printf("\n\t數量:");
		cin>>number;
		if(cin.fail()){
		input=MessageBox(NULL,TEXT("輸入有誤，請輸入數字"),TEXT("OOPS!"),MB_OK==IDOK);
		}
			if(input==IDOK) return 0;
	
		cost=price*number;
		printf("\n\t金額:%d",cost);

		printf("\n\n\t實收:");
		cin>>money;
		if(cin.fail()){
			MessageBox(NULL,TEXT("輸入有誤，請輸入數字"),TEXT("OOPS!"),MB_OK);
		}
		else if(money<cost){
			MessageBox(NULL,TEXT("金額不足!!"),TEXT("OOPS!"),MB_OK);
		}
		else if(money>cost){
			charge=money-cost;
			printf("\n\t找零:%d",charge);
		}
		else if(money=cost){
			MessageBox(NULL,TEXT("謝謝惠顧!"),TEXT("OOPS!"),MB_OK);
		}

		
		printf("\n\t\t應找鈔票如下:");
		b=charge;
		do{
	
		if(b>=500){
			a=b/500;
			printf("\n\t500元:%d張",a);
			b=b%500;
		}
		
		else if(b>=100&&b<500){
			a=b/100;
			printf("\n\t100元:%d張",a);
			b=b%100;
		}
		
		else if(b>=50&&b<100){
			a=b/50;
			printf("\n\t50元:%d枚",a);
			b=b%50;
		}
		
		else if(b>=10&&b<50){
			a=b/10;
			printf("\n\t10元:%d枚",a);
			b=b%10;
		}
		
		else if(b>=5&&b<10){
			a=b/5;
			printf("\n\t5元:%d枚",a);
			b=b%5;
		}
		
		else if(b>=1&&b<5){
			a=b/1;
			printf("\n\t1元:%d枚",a);
			b=b%1;
		}
}while(b>0);
	return 0;
}

