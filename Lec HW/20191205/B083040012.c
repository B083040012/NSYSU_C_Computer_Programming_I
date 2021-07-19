#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

struct node{
		int data;
		struct node *next;
	};
	
struct node *top=NULL;

void mypush(int value){
	struct node *new;
	new=malloc(sizeof(struct node));
	new->data=value;
	new->next=NULL;
	new->next=top;
	top=new;
}

int mypop(){
	int num;
	if(top==NULL){
		return -1;
	}
	else{
		num=top->data;
		top=top->next;
		return num;
	}
}

void print_stack(){
	struct node *print;
	print=top;
	while(print!=NULL){
		printf("*       *\n");
		printf("*%5d  *\n",print->data);
		printf("*       *\n");
		printf("*********\n");
		print=print->next;
	}
}

int main(){
	
	int input1,input2,i;
	printf("Nothing in stack\n");
	while(1){
		printf("Please input the instruction:");
		if(scanf("%d",&input1)!=EOF){
			if(input1==1){
				scanf("%d",&input2);
				printf("Push %d into stack\n",input2);
				mypush(input2);
				print_stack();
			}
			else if(input1==2){
				i=mypop();
				if(i==-1){
					printf("Error pop\n");
				}
				else{
					printf("pop %d from stack\n",i);
					print_stack();
				}
			}
		}
		else{
			break;
		}
	}
	

	return 0;
}

