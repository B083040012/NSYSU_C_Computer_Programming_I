#include<stdio.h>
#include<math.h>

int main(){
	int ad, ch, mad, mch,i=1;
	char flag='y';
	
	while(flag=='y'){
	printf("\t\t====�w��Ө�Ⲽ�t��====");
	printf("\n\t\t���H:");
	scanf("%d",&ad);
	
	printf("\t\t�ѤH,�ൣ:");
	scanf("%d",&ch);
	
	printf("\n\n\t\t  ���H��:  %2d�i\n",ad);
	printf("\t\t�ѤH_�ൣ��:%2d�i\n",ch);
	
	mad=ad*300;
	mch=ch*50;
	
	printf("\n\n\t\t���H��:%d",mad);
	printf("\n\t\t�ൣ,�ѤH:%d",mch);
	printf("\n\t\t���I���B:%d",mad+mch);
	
	printf("\n\t\t�O�_���}<y/n>:");
	scanf(" %c",&flag);
}

	return 0;
}

