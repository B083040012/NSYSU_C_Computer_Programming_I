#include<stdio.h>
#include<math.h>

int funl(int a){
	int sum=0,i;
	for(i=1;i<=a;i++)
		sum+=pow(i,i);
		return sum;
}

int main(){
	
	int input;
	printf("��J:");
	scanf("%d",&input);
	printf("��X:%d",funl(input));
	
	return 0;
}

