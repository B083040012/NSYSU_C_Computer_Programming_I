#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

struct student{
		char name[10];
		int math;
		int eng;
	}stu1,stu2,stu3;

void enterdata(struct student *enter){
	printf("�п�J�m�W:");
	scanf("%s",&enter->name);
	printf("�п�J�ƾǦ��Z:");
	scanf("%d",&enter->math);
	printf("�п�J�^�妨�Z:");
	scanf("%d",&enter->eng);
}

void printdata(struct student *output){
	printf("%s����%.2lf��\n",output->name,(double)(output->math+output->eng)/2);
}

int main(){
	
	enterdata(&stu1);
	enterdata(&stu2);
	enterdata(&stu3);
	printdata(&stu1);
	printdata(&stu2);
	printdata(&stu3);
	
	return 0;
}

