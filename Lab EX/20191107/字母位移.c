#include<stdio.h>

void fun(int d,char ch){
	printf("��X:");
	while(ch<90){
		printf("%c ",ch);
		ch+=d;
	}
}
int main(){
	
	int d;
	char ch;
	
	printf("��J�첾��:");
	scanf("%d",&d);
	printf("��J�_�l�r��:");
	scanf(" %c",&ch);
	fun(d,ch);

	return 0;
}

