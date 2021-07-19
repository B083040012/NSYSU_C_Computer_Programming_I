#include<stdio.h>
#include<math.h>

int main(){
	int ad, ch, mad, mch,i=1;
	char flag='y';
	
	while(flag=='y'){
	printf("\t\t====歡迎來到售票系統====");
	printf("\n\t\t成人:");
	scanf("%d",&ad);
	
	printf("\t\t老人,兒童:");
	scanf("%d",&ch);
	
	printf("\n\n\t\t  成人票:  %2d張\n",ad);
	printf("\t\t老人_兒童票:%2d張\n",ch);
	
	mad=ad*300;
	mch=ch*50;
	
	printf("\n\n\t\t成人票:%d",mad);
	printf("\n\t\t兒童,老人:%d",mch);
	printf("\n\t\t應付金額:%d",mad+mch);
	
	printf("\n\t\t是否離開<y/n>:");
	scanf(" %c",&flag);
}

	return 0;
}

