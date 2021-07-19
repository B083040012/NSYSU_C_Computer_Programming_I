#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fac(int i){
	if(i==1){
		return 1;
	}
	else
		return fac(i-1)*i;
}

int main(){
	
	int input;
	printf("¿é¤J¼Æ¦r:");
	scanf("%d",&input);
	printf("%d!=%d",input,fac(input));

	return 0;
}

