#include<stdio.h>
#include<stdlib.h>
//define for Exercise 2
#define bm month==1||month==3||month==5||month==7||month==8||month==10||month==12
#define sm month==4||month==6||month==9||month==11
#define ly (year%4==0 && year%100!=0) || (year%400==0 && year%3200!=0)

int main(){
	
	// Exercise 1
	
	int min,fee=220;
	
	printf("Time (minutes):");
	scanf("%d",&min);
	
	if(min<0){
		printf("Error!");
	}
	else{
		if(70>=min&&min>10){
			printf("The parking fee is 100 dollar(s)");
		}
		else if(130>=min&&min>70){
			printf("The parking fee is 170 dollar(s)");
		}
		else if(190>=min&&min>130){
			printf("The parking fee is 220 dollar(s)");
		}
		else{
			if(min%60>10){
				fee=fee+20*(min/60-2);
			}
			else{
				fee=fee+20*(min/60-3);
			}
			printf("The parking fee is %d dollar(s)",fee);
		}
		
	}
	
	printf("\n\n\t=================\n\n");
	
	// Exercise 2
	
	int year,month,day,sum=0,flag=0;
	scanf("%d %d %d",&year,&month,&day);
	
	if((month>12) || ((bm)&&day>31) || ((sm)&&day>30) || ((ly)&&month==2&&day>29) || ((!ly)&&month==2&&day>28)){
		printf("Error!!");
	}
	else{
		if(ly){
			printf("It's leap year\n");
			flag=1;
		}
		else{
			printf("It's common year\n");
		}
		
		switch(month){
			case 12:
				sum+=30;
			case 11:
				sum+=31;
			case 10:
				sum+=30;
			case 9:
				sum+=31;
			case 8:
				sum+=31;
			case 7:
				sum+=30;
			case 6:
				sum+=31;
			case 5:
				sum+=30;
			case 4:
				sum+=31;
			case 3:
				if(flag==1)
					sum+=29;
				else
					sum+=28;
			case 2:
				sum+=31;
			default:
				sum=sum+day;
		}
		
		if(sum==1){
			printf("It's the 1st day in %d",year);
		}
		else if(sum==2){
			printf("It's the 2nd day in %d",year);
		}
		else if(sum==3){
			printf("It's the 3rd day in %d",year);
		}
		else{
			printf("It's the %dth day in %d",sum,year);
		}
	}

	return 0;
}

