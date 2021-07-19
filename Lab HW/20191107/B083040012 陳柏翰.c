#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	
	int num[100],k,temp,i;
	srand(time(NULL));
	for(i=0;i<=99;i++){
		num[i]=(rand()%100)+1;
	}
	for(k=1;k<=100;k++){
		for(i=0;i<=98;i++){
			if(num[i]>num[i+1]){
				temp=num[i];
				num[i]=num[i+1];
				num[i+1]=temp;
			}	
		}
	}
	for(i=0;i<=99;i++)
		printf("%d ",num[i]);
		
	return 0;
}
