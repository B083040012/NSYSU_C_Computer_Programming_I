#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	printf("���n�D:\n");
	printf("C�{���]�p�б¬����̧^\n\n");
	
	printf("�Ĥ@�D\n");
	printf("%cI am GROOT!%c\n",34,34);
	printf("87%c����A���F...\n",37);
	printf("%c%c%c%c%c",46,92,95,47,46); 
	
	printf("\n\n�ĤG�D\n");
	char input_2;
	scanf("%c",&input_2);
	printf("��J���O%c�A��ĤT�Ӧr����%c\n",input_2,input_2+3);
	
	printf("\n\n�ĤT�D:\n");
	int count=0,a;
	double input_3;
	scanf("%lf",&input_3);
	a=(int)input_3;
	while(input_3>=1){
		input_3=input_3/2;
		count++;
	}
	printf("%d���H%d��2����p��1",a,count);
	
	printf("\n\n�ĥ|�D\n");
	int input_4,temp_4,x=1,y=1,i,k;
	scanf("%d",&input_4);
	temp_4=input_4;
	char square[input_4+1][input_4+1];
	for(i=1;i<=input_4;i++){
		for(k=1;k<=input_4;k++){
			square[k][i]=' ';
		}
	}
	while(temp_4>=1){
		for(i=0;i<temp_4;i++){
			square[x][y+i]='*';
			square[x+temp_4-1][y+i]='*';
			square[x+i][y]='*';
			square[x+i][y+temp_4-1]='*';
		}
		x+=2;
		y+=2;
		temp_4-=4;
	}
	for(i=1;i<=input_4;i++){
		for(k=1;k<=input_4;k++){
			printf("%c ",square[k][i]);
		}
		printf("\n");
	}

	printf("\n\n�Ĥ��D\n");
	int cal=0,flag=1,input_5;	
	while(1){
		printf("==================\n");
		printf("|1:�[�@          |\n");
		printf("|2:��@          |\n");
		printf("|3:���}          |\n");
		printf("==================\n");
		printf("Option:");
		if(scanf("%d",&input_5)==1){
			if(input_5==1){
				cal++;
				printf("Current number is %d\n",cal);
			}
			else if(input_5==2){
				cal--;
				printf("Current number is %d\n",cal);
			}
			else if(input_5==3)
				break;
			else
				printf("Wrong Option!\n");
		}
		else
			printf("Wrong Option!\n");	
	}
	
	printf("\n\n�Ĥ��D\n");
	int input_6,b,count_6=0,sum_6=0,tem_6;
	printf("�п�J10��10000000�����:");
	scanf("%d",&input_6);
	for(i=10;i<=input_6;i++){
		b=i;
		tem_6=i;
		while(b>=10){
			b=b/10;
			count_6++;
		}
		count_6++;
		while(tem_6>=1){
			sum_6+=pow((tem_6%10),count_6);
			tem_6=tem_6/10;
		}
		if(sum_6==i){
			printf("%d\n",i);
		}
		sum_6=0;
		count_6=0;
	}
	
	printf("\n\n�ĤC�D\n");
	char ch;
	while(1){
		printf("��J�y��:");
		scanf(" %c%d%c%d%c",&ch,&x,&ch,&y,&ch);
		if(pow(x-5,2)+pow(y-5,2)<9){
			printf("�y��(%d,%d)�b�ꤺ\n",x,y);
			break;
		}
		else{
			printf("�y��(%d,%d)�S�b�ꤺ\n",x,y);
		}
	}
	
	
	
	

	return 0;
}

