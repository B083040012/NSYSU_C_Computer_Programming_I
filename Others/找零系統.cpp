#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
#include<iostream>
using namespace std;

int main(){
		int price, number, cost, money, charge, a, b;
		UINT input;
	
		printf("\t\t�w��Ө����t��!!\n");
	

		printf("\t���:");
		cin>>price;
		if(cin.fail()){
		input=MessageBox(NULL,TEXT("��J���~�A�п�J�Ʀr"),TEXT("OOPS!"),MB_OK==IDOK);
		}
			if(input==IDOK) return 0;
		printf("\n\t�ƶq:");
		cin>>number;
		if(cin.fail()){
		input=MessageBox(NULL,TEXT("��J���~�A�п�J�Ʀr"),TEXT("OOPS!"),MB_OK==IDOK);
		}
			if(input==IDOK) return 0;
	
		cost=price*number;
		printf("\n\t���B:%d",cost);

		printf("\n\n\t�ꦬ:");
		cin>>money;
		if(cin.fail()){
			MessageBox(NULL,TEXT("��J���~�A�п�J�Ʀr"),TEXT("OOPS!"),MB_OK);
		}
		else if(money<cost){
			MessageBox(NULL,TEXT("���B����!!"),TEXT("OOPS!"),MB_OK);
		}
		else if(money>cost){
			charge=money-cost;
			printf("\n\t��s:%d",charge);
		}
		else if(money=cost){
			MessageBox(NULL,TEXT("���´f�U!"),TEXT("OOPS!"),MB_OK);
		}

		
		printf("\n\t\t����r���p�U:");
		b=charge;
		do{
	
		if(b>=500){
			a=b/500;
			printf("\n\t500��:%d�i",a);
			b=b%500;
		}
		
		else if(b>=100&&b<500){
			a=b/100;
			printf("\n\t100��:%d�i",a);
			b=b%100;
		}
		
		else if(b>=50&&b<100){
			a=b/50;
			printf("\n\t50��:%d�T",a);
			b=b%50;
		}
		
		else if(b>=10&&b<50){
			a=b/10;
			printf("\n\t10��:%d�T",a);
			b=b%10;
		}
		
		else if(b>=5&&b<10){
			a=b/5;
			printf("\n\t5��:%d�T",a);
			b=b%5;
		}
		
		else if(b>=1&&b<5){
			a=b/1;
			printf("\n\t1��:%d�T",a);
			b=b%1;
		}
}while(b>0);
	return 0;
}

