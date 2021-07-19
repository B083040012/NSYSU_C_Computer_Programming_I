#include<stdio.h>
int main(){
	
	int days,fd;
	
	printf("天數:");
	scanf("%d",&days);
	printf("起始日:");
	scanf("%d",&fd);
	
	for(int i=fd;i>1;i--)
		printf("   ");
		
	for(int i=1;i<=days;i++){
		if(i<=9)
			printf(" ");
		printf("%d ",i);
		if((i+fd-1)%7==0)
			printf("\n");
	}
	return 0;
}

