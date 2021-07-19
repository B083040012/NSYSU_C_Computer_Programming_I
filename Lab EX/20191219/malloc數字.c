#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(){
	
	int i;
	int *num=malloc(3*sizeof(int));
	for(i=0;i<=2;i++){
		printf("請輸入第%d個數:",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<=2;i++){
		printf("第%d個數為%d\n",(i+1),num[i]);
	}
	free(num);

	return 0;
}

