#include<stdio.h>
#include<math.h>

int main(){
	
	int money,in,fre,y,m,i;
	float inter;
	
	printf("����:");
	scanf("%d",&money);
	m=money;
	
	printf("�~�Q�v:");
	scanf("%d",&in);
	inter=(float)in/100;
	
	printf("�ƧQ�p���W�v:");
	scanf("%d",&fre);
	
	printf("�~��:");
	scanf("%d",&y);
	
	if(fre==1){
		for(i=1;i<=y;i++){
			money=money*(1+inter);
		}
	}
	if(fre==2){
		for(i=1;i<=2*y;i++){
			money=money*(1+(inter/2));
		}
	}
	if(fre==3){
		for(i=1;i<=4*y;i++){
			money=money*(1+(inter/4));
		}
	}
	if(fre==4){
		for(i=1;i<=12*y;i++){
			money=money*(1+(inter/12));
		}
	}
	
	printf("�̲��`���B:%d",money);
	printf("\n�Ȩ����B:%d",money-m);
	
	return 0;
}

