#include<stdio.h>
#include<stdlib.h>

int main(){
	
	while(1){
		int a, i, j, k;
		scanf("%d",&a);
		
		if(a!=0){
			for(i=1 ;i<=a ;i++){
			for(j=0 ;j<=a-i ;j++){
				printf(" ");
			}
			
			for(k=1 ;k<=2*i-1 ;k++){
				printf("*");
			}
			
			printf("\n");
		}
		}
		
		else 
			break;
		
	}
	return 0;
}

