#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int len[4], j=0 ,tem;
	
	printf("��J�|���:");
	while(j<=3){
		scanf("%d",&len[j]);
		j++;
	}
	
	if(len[0]==len[1]&&len[1]==len[2]&&len[2]==len[3]){
		printf("�٧�");
	}
	else if(len[0]==len[2]&&len[1]==len[3]){
		printf("����|���");
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
		printf("��L�|���");
		
	printf("\n\n\n\t==========\n\n\n");

	return 0;
}

