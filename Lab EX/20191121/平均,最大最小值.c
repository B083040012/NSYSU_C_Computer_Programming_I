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
	printf("\n�̤p��:%d",minnum);
	printf("\n�̤p��_���ޭ�:%d",num);
}

int max(int in[]){
	int i,maxnum=in[0],num=0;
	for(i=1;i<=4;i++){
		if(in[i]>maxnum){
			maxnum=in[i];
			num=i;
		}
	}
	printf("\n�̤j��:%d",maxnum);
	printf("\n�̤j��_���ޭ�:%d",num);
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
		printf("�п�J��%d�ӼƦr:",i+1);
		scanf("%d",&input[i]);
	}
	printf("������:%d",ave(input));
	min(input);
	max(input);
	



	return 0;
}

