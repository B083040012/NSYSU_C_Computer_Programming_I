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
		printf("�п�J�@�ӥ��ơI"); 
	else {
		//printf("��J���~�A�п�J�Ʀr"); 
		//abort();
		MessageBox(NULL,TEXT("��J���~�A�п�J�Ʀr"),TEXT("����"),MB_OK);
	}
	return 0;
} 

