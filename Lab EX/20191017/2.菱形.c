#include<stdio.h>

int main(){
	
	int i,num,k;
	
	while(1){
	printf("�Фſ�J�D�Ʀr,�п�J�٧ι﨤�u��(�����O�_��),���}�п�J0:");
	scanf("%d",&num);
		if(num==0)
			break;
		else if(num%2==0)
			continue;
		else{
			for(i=1;i<=(num+1)/2;i++){
				for(k=(num+1)/2-i;k>=1;k--)
					printf(" ");
				for(k=1;k<=2*i-1;k++)
					printf("*");
			printf("\n");
			}
			for(i=(num+1)/2-1;i>=1;i--){
				for(k=(num+1)/2-i;k>=1;k--)
					printf(" ");
				for(k=1;k<=2*i-1;k++)
					printf("*");
			printf("\n");
			}
	    }
	}
	

	

	return 0;
}

