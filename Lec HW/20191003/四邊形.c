#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int len[4], j=0 ,tem;
	
	printf("輸入四邊長:");
	while(j<=3){
		scanf("%d",&len[j]);
		j++;
	}
	
	if(len[0]==len[1]&&len[1]==len[2]&&len[2]==len[3]){
		printf("菱形");
	}
	else if(len[0]==len[2]&&len[1]==len[3]){
		printf("平行四邊形");
	}
	else if(len[0]>=len[1]+len[2]+len[3]){
		
		if(len[0]<len[1]){
		tem=len[0];
		len[0]=len[1];
		len[1]=tem;
		
		if(len[0]<len[2]){
			tem=len[0];
			len[0]=len[2];
			len[2]=tem;
			
			if(len[0]<len[3]){
				tem=len[0];
				len[0]=len[3];
				len[3]=tem;
			}
		}
	}
		printf("Banana!");
	}
	else
		printf("其他四邊形");
		
	printf("\n\n\n\t==========\n\n\n");

	return 0;
}

