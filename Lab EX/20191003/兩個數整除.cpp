#include<stdio.h>
#include<math.h>

int main(){
	
	int a,b;
	
	while(1){
		printf("請輸入兩個數:");
		scanf("%d %d",&a,&b);
		if(a%b==0){
			printf("%d可以被%d整除",a,b);
			break;
		}
	}

	return 0;
}

