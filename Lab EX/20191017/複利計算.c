#include<stdio.h>
#include<math.h>

int main(){
	
	int money,in,fre,y,m,i;
	float inter;
	
	printf("本金:");
	scanf("%d",&money);
	m=money;
	
	printf("年利率:");
	scanf("%d",&in);
	inter=(float)in/100;
	
	printf("複利計算頻率:");
	scanf("%d",&fre);
	
	printf("年期:");
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
	
	printf("最終總金額:%d",money);
	printf("\n賺取金額:%d",money-m);
	
	return 0;
}

