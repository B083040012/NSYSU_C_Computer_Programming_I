#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void chart(int a,int b){
	if(b<10){
		printf("%d * %d = %2d ",a,b,a*b);
		chart(a,b+1);
	}
	else if(a<9&&b>9){
		printf("\n");
		chart(a+1,1);
	}
}

int main(){
	
	chart(1,1);

	return 0;
}

