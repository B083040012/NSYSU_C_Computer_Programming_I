#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(void)
{
	FILE *fp;
	FILE *fp_in;
	FILE *fp_out;
	int i,num1=0,num_in=0,num_out;
	int tool=0,index;
	char ch,data[1000],temp;
	
	//���Ͷü� 
	/* 
	srand(time(NULL));
	fp=fopen("input1.txt","w");
	for(i=0; i<1000; i++)
	{
		tool=rand()%2;
		if(tool==0)
		{
			index=rand()%25+65;
		}
		else
		{
			index=rand()%25+97;
		}
		fprintf(fp,"%c",index);
	}
	fclose(fp);
	*/ 
	
	//�Ĥ@�D 
	fp_in=fopen("input1.txt","r");
	for(i=0; i<1000; i++)
	{
		data[i]=fgetc(fp_in);
		//printf("%c",data[i]);
	}
	while(ch != '*')
	{
		printf("�z�bTEST1.txt�Q�M��ƶq���r����: ");
    	scanf(" %c",&ch);
    	num1=0;
    	if((ch>=65 && ch<=90 )||(ch>=97 && ch<=122))
    	{
    		if(ch>=97)																//�N�p�g�����j�g 
			{
    			temp=(ch-32);    			
			}
			else
			{
				temp=ch;				
			}
			for(i=0; i<999; i++)               								//�p���J�r���X�{���� 
			{
				if(temp==data[i] || (temp+32)==data[i])
				{
					num1++;
				}
			}	
			printf("�Ӧr��'%c'�b�Ӥ�󤤼ƶq��: %d\n\n",ch,num1);			
    	}
		else
		{
			printf("Wrong input\n\n");
		}
	}
	printf("��J����\n\n");
	fclose(fp_in);
	
	
	//�ĤG�D 
	printf("�C�檺�r���ơG ");
	scanf("%d",&num_in);
    while(num_in!=-1){		
		if(num_in>0){
			fp_in=fopen("input1.txt","r");
			fp_out=fopen("output2.txt","w");
			num_out=num_in;		
			i=0;													 
			while((data[i]=fgetc(fp_in))!=EOF) {				
				fputc(data[i],fp_out);
				i++;
				if((i%num_out) ==  0)
				{
					fprintf(fp_out,"\n");
				}
			}	
			fclose(fp_out);	
			printf("��粒��!\n");
		}
		else
		{ 
			printf("��J���~�A�b�դ@��\n");
		} 
		
		printf("�C�檺�r���ơG "); 
		scanf("%d",&num_in);	
	}
	
	
    printf("�����ק�\n"); 
    fclose(fp_in);
	
	return 0;
}
