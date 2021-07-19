#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fibo(int i){
	if(i==1 || i==2){
		return 1;
	}
	else
		return fibo(i-2)+fibo(i-1);
}

int main(){
	
	int input,i;
	printf("½Ð¿é¤J¼Æ¦r");
	scanf("%d",&input);
	for(i=1;i<=input-1;i++){
		printf("%d ,",fibo(i));
	}
	printf("%d",fibo(input));
	
	return 0;
}

