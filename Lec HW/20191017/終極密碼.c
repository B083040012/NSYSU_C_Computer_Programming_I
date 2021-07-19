#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int answer,low=0,high=500,sum=0,guess=0;
	
	printf("請輸入答案(範圍:0~500):\n");
	scanf("%d",&answer);
	
	while(1){
		printf("\n猜一個數字\n");
		scanf("%d",&guess);
		if(guess>answer && guess<high){
			high=guess;
			sum++;
			printf("\n範圍%d到%d",low,high);
		}
		else if(guess<answer && guess>low){
			low=guess;
			sum++;
			printf("\n範圍%d到%d",low,high);
		}
		else if(guess==answer){
			sum++;
			printf("\n恭喜猜對!!\n你猜了%d次",sum);
			break;
		}
			
		else{
			printf("\n範圍%d到%d\n",low,high);
			sum++; 
		} 	
	}

	return 0;
}

