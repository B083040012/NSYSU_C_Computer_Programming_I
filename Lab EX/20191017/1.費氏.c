#include<stdio.h>

int main(){
	
	int i,j=0,k=1,num,tem;
	
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		printf("%d ",k);
		tem=k;
		k=k+j;
		j=tem;
	}

	return 0;
}

