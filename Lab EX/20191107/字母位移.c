#include<stdio.h>

void fun(int d,char ch){
	printf("輸出:");
	while(ch<90){
		printf("%c ",ch);
		ch+=d;
	}
}
int main(){
	
	int d;
	char ch;
	
	printf("輸入位移數:");
	scanf("%d",&d);
	printf("輸入起始字母:");
	scanf(" %c",&ch);
	fun(d,ch);

	return 0;
}

