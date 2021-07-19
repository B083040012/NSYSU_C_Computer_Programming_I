#include<stdio.h>
#include<math.h>

int main(){
	
	int a, sum;
	
	while(1){
		printf("請輸入數字:");
		scanf("%d",&a);
		sum+=a;
		
		if(a==0){
			printf("總合為:%d",sum);
			break;
		}
	} 

	return 0;
}

