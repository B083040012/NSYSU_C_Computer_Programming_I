#include<stdio.h>
#include<math.h>

int main(){
	
	int a,b;
	
	while(1){
		printf("�п�J��Ӽ�:");
		scanf("%d %d",&a,&b);
		if(a%b==0){
			printf("%d�i�H�Q%d�㰣",a,b);
			break;
		}
	}

	return 0;
}

