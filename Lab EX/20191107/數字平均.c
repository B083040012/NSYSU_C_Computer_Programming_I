#include<stdio.h>
#include<math.h>

int main(){
	
	int i,input[5],sum=0;
	for(i=0;i<=4;i++){
		printf("�п�J��%d�ӼƦr",i+1);
		scanf("%d",&input[i]);
		sum+=input[i];
	}
	printf("������:%d",sum/5);

	return 0;
}

