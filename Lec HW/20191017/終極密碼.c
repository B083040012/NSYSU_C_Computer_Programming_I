#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int answer,low=0,high=500,sum=0,guess=0;
	
	printf("�п�J����(�d��:0~500):\n");
	scanf("%d",&answer);
	
	while(1){
		printf("\n�q�@�ӼƦr\n");
		scanf("%d",&guess);
		if(guess>answer && guess<high){
			high=guess;
			sum++;
			printf("\n�d��%d��%d",low,high);
		}
		else if(guess<answer && guess>low){
			low=guess;
			sum++;
			printf("\n�d��%d��%d",low,high);
		}
		else if(guess==answer){
			sum++;
			printf("\n���߲q��!!\n�A�q�F%d��",sum);
			break;
		}
			
		else{
			printf("\n�d��%d��%d\n",low,high);
			sum++; 
		} 	
	}

	return 0;
}

