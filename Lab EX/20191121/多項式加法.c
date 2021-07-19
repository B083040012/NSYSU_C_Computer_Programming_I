#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void playAdd(int a[],int b[]){
	int i;
	for(i=9;i>=1;i--){
		printf("%2d x^%d +",a[i]+b[i],i);
	}
	printf("%d",a[0]+b[0]);
}

int main(){
	
	int a[10],b[10],i;
	srand(time(NULL));
	for(i=0;i<=9;i++){
		a[i]=rand()%10;
		b[i]=rand()%10;
	}
	printf("A:");
	for(i=9;i>=1;i--){
		printf("%2d x^%d +",a[i],i);
	}
	printf("%d",a[0]);
	printf("\nB:");
	for(i=9;i>=1;i--){
		printf("%2d x^%d +",b[i],i);
	}
	printf("%d",b[0]);
	printf("\nC:");
	playAdd(a,b);


	return 0;
}

