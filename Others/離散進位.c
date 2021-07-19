#include<stdio.h>

int main(){
	
	int input,base,num[99999],temp,i=0;
	printf("input a base 10 number (positive integer):");
	scanf("%d",&input);
	
	printf("\ninput the base (an integer between 2 and 9 inclusive):");
	scanf("%d",&base);
	
	while(input>=base){
		num[i]=input%base;
		input=input/base;
		i++;
	}
	num[i]=input;
	
	printf("\nThe base 10 number %d convert to base %d is ",input,base);
	
	for(i;i>=0;i--){
		printf("%d",num[i]);
	}
	
	return 0;
}

