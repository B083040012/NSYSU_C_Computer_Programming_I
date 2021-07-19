#include<stdio.h>
#include <stdlib.h>

int main(){
	
	int num,i,k,absolute;
	scanf("%d",&num);
	
	for(i=1;i<=2*num-1;i++){
		absolute=abs(num-i);
		printf("\n");
		
		for(k=1;k<=absolute;k++)
				printf(" ");
		printf("*");
		
		if(i==1 || i==2*num-1)
			continue;
			
		else{
			for(k=1;k<=-2*absolute+(2*num-3);k++){
				if(i==num&&k==num-1)
					printf("%d",num);
					
				else
					printf(" ");
			}	
			printf("*");
		}
	}
	return 0;
}

