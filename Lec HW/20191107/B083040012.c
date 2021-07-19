#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define ly (year%4==0 && year%100!=0) || (year%400==0 && year%3200!=0)
#define bm month==1||month==3||month==5||month==7||month==8||month==10||month==12
#define sm month==4||month==6||month==9||month==11

int main(){
	
	int input,year,month,fday,day,i,j;

	printf("Input:");
	scanf("%d",&input);
	year=input/1000;
	input=input%1000;
	month=input/10;
	input=input%10;
	fday=input;
	if(month>12 || month<1 || day>6 || day<0){
		printf("Wrong Input!!");
	}
	else{
		switch(month){
			case 1:
				printf("  %27s, %d\n","January",year);
				break;
			case 2:
				printf("  %27s, %d\n","February",year);
				break;
			case 3:
				printf("  %27s, %d\n","March",year);
				break;
			case 4:
				printf("  %27s, %d\n","April",year);
				break;
			case 5:
				printf("  %27s, %d\n","May",year);
				break;
			case 6:
				printf("  %27s, %d\n","June",year);
				break;
			case 7:
				printf("  %27s, %d\n","July",year);
				break;
			case 8:
				printf("  %27s, %d\n","August",year);
				break;
			case 9:
				printf("  %27s, %d\n","September",year);
				break;
			case 10:
				printf("  %27s, %d\n","October",year);
				break;
			case 11:
				printf("  %27s, %d\n","November",year);
				break;
			case 12:
				printf("  %27s, %d\n","December",year);
				break;
		}
		printf("  %s\n  ","SUN  MON  TUE  WED  THU  FRI  SAT");
		if(bm){
			day=31;
		}
		else if(sm){
			day=30;
		}
		else if(ly&&month==2){
			day=29;
		}
		else if(!ly&&month==2){
			day=28;
		}
		for(i=1;i<=fday;i++){
			for(j=1;j<=5;j++){
				printf(" ");
			}
		}
		for(i=1;i<=day;i++){
			if(i<10){
				printf("  %d  ",i);
			}
			else{
				printf(" %d  ",i);
			}
			if((i+fday)%7==0){
				printf("\n  ");
			}
		}
	}
	
	return 0;
}

