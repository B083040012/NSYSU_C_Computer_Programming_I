#include<stdio.h>
#include<stdlib.h>
#define bm month==1||month==3||month==5||month==7||month==8||month==10||month==12
#define sm month==4||month==6||month==9||month==11
#define ly (year%4==0 && year%100!=0) || (year%400==0 && year%3200!=0)

int main(){
	
	int year,month,day,sum,flag=0;
	scanf("%d %d %d",&year,&month,&day);
	
	if((month>12) || ((bm)&&day>31) || ((sm)&&day>30) || ((ly)&&month==2&&day>29) || ((!ly)&&month==2&&day>28)){
		printf("Error!!");
	}
	else{
		if((year%4==0 && year%100!=0) || (year%400==0 && year%3200!=0)){
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

