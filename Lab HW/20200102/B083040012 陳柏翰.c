#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include<time.h>
#define maxsize 6

int stack[maxsize]={0};
int top=0,bot=0;

void push(int num){
    if(top<maxsize && stack[top]==0){
        stack[top]=num;
        if(top==maxsize-1){
            top=0;
        }
        else{
            top++;
        }
        return;
    }
    else{
        printf("FULL!!!\n");
        return;
    }
}

int pop(){
    int value;
    if(stack[bot]!=0){
        value=stack[bot];
        stack[bot]=0;
        if(bot==maxsize-1){
            bot=0;
        }
        else{
            bot++;
        }
        return value;
    }
    else{
        return -1;
    }
}

void print(){
    int i=1,current=bot;
    while(i<=maxsize){
        printf("%d ",stack[current]);
        if(current==maxsize-1){
            current=0;
        }
        else{
            current++;
        }
        i++;
    }
}

int main(void)
{
    int func,input,num;
    while(1){
        printf("\n1.push\n2.pop\n3.peek\n4.End Program\n½Ð¿ï¾Ü:");
        scanf("%d",&func);
        if(func==1){
            printf("push:");
            scanf("%d",&input);
            if(top==maxsize){
                printf("FULL!!!\n");
            }
            else{
               push(input); 
            }
            print();
        }
        else if(func==2){
            printf("pop:");
            if((num=pop())==-1){
                printf("Empty\n");
            }
            else{
                printf("%d\n",num);
            }
            print();
        }
        else if(func==3){
            printf("Peek:");
            if(stack[bot]==0){
                printf("empty\n");
            }
            else{
                printf("%d\n",stack[bot]);
            }
            print();
        }
        else if(func==4){
            break;
        }
    }
    system("pause");
    return 0;
}