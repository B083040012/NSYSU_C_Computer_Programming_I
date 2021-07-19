#include<stdio.h>
#include<math.h>

int main(){
	
	int i,input[5],sum=0;
	for(i=0;i<=4;i++){
		printf("請輸入第%d個數字",i+1);
		scanf("%d",&input[i]);
		sum+=input[i];
	}
	printf("平均為:%d",sum/5);

	return 0;
}

