#include<stdio.h>
#include<math.h>

int main(){
	
	int a, sum;
	
	while(1){
		printf("�п�J�Ʀr:");
		scanf("%d",&a);
		sum+=a;
		
		if(a==0){
			printf("�`�X��:%d",sum);
			break;
		}
	} 

	return 0;
}

