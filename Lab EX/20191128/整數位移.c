#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void move(int* num,int m){
	int i;
	printf("位移後:");
	for(i=0;i<=4;i++){
		printf("%d ",*(num+(5-m+i)%5));
	}
}

void find_max(int *num,int *max){
	int i;
	*max=num[0];
	for(i=1;i<=4;i++){
		if(num[i]>*max){
			*max=num[i];
		}
	}
}

int main(){
	
	int i,m,num[5],max;
	printf("位移數:");
	scanf("%d",&m);
	printf("請輸入五個整數:");
	for(i=0;i<=4;i++){
		scanf("%d",&num[i]);
	} 
	move(num,m);
	find_max(num,&max);
	printf("\nMax:%d",max);

	return 0;
}

