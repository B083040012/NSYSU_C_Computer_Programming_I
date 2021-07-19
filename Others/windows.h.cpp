#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
	char r;
	int r1;
	scanf("%c",&r);
	if(r>='0'&&r<='9'){
		r1=r-'0';
		printf("%d\n",r1);
	}
	else if(r<0)
		printf("請輸入一個正數！"); 
	else {
		//printf("輸入有誤，請輸入數字"); 
		//abort();
		MessageBox(NULL,TEXT("輸入有誤，請輸入數字"),TEXT("提示"),MB_OK);
	}
	return 0;
} 

