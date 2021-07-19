#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int min(int in[]){
	int i,minnum=in[0],num=0;
	for(i=1;i<=4;i++){
		if(in[i]<minnum){
			minnum=in[i];
			num=i;
		}
	}
	printf("\n程:%d",minnum);
	printf("\n程_ま:%d",num);
}

int max(int in[]){
	int i,maxnum=in[0],num=0;
	for(i=1;i<=4;i++){
		if(in[i]>maxnum){
			maxnum=in[i];
			num=i;
		}
	}
	printf("\n程:%d",maxnum);
	printf("\n程_ま:%d",num);
}

int ave(int in[]){
	int i,sum=0;
	for(i=0;i<=4;i++){
		sum+=in[i];
	}
	sum/=5;
	return sum;
}

int main(){
	
	int i,input[5];
	
	for(i=0;i<=4;i++){
		printf("叫块材%d计:",i+1);
		scanf("%d",&input[i]);
	}
	printf("キА:%d",ave(input));
	min(input);
	max(input);
	



	return 0;
}

