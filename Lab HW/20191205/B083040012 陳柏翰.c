#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define maxsize 5 

int top=0,stack[maxsize];

int empty(){
	if(top==0){
		return 1;
	}
	else{
		return 0;
	}
}

int push(int input){
	if(top<maxsize){
		stack[top]=input;
		top++;
		return 0;
	}
	else{
		return -1;
	}
}

int full(){
	if(top==maxsize){
		return 1;
	}
	else{
		return 0;
	}
}

int pop(){
	if(top>0){
		top--;
		return stack[top];
	}
	else{
		return -1;
	}
}

int main(){
	
	int i,input;
	if(empty()==1){
		printf("堆疊為空\n");
	}
	else{
		printf("堆疊不為空\n");
	}
	printf("輸入:");
	for(i=1;i<=5;i++){
		scanf("%d",&input);
		push(input);
	}
	if(full()==1){
		printf("堆疊為滿\n");
	}
	else{
		printf("堆疊不為滿\n");
	}
	printf("pop出的值為:");
	for(i=1;i<=5;i++){
		printf("%d ",pop());
	}
	if(empty()==1){
		printf("\n堆疊為空");
	}
	else{
		printf("\n堆疊不為空");
	}
	

	return 0;
}

