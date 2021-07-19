#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int min,sum=220;
	
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
				sum=sum+20*(min/60-2);
			}
			else{
				sum=sum+20*(min/60-3);
			}
			printf("The parking fee is %d dollar(s)",sum);
		}
		
	}


	return 0;
}

