#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include<time.h>
#define maxsize 6

int queue[5];
int head=0,tail=0;

int enqueue(int num){
    if(((tail+1)%maxsize)!=head){
        queue[tail]=num;
        printf("tail:%d\nnum:%d\n",tail,num);
        tail++;
        tail=tail%maxsize;
        return 1;
    }
    else{
        return 0;
    }
}

int dequeue(){
    int value;
    if((tail)!=head){
        value=queue[head];
        head++;
        head=head%maxsize;
        return value;
    }
    else{
        return -1;
    }
}

int main(void)
{
    int input,i,value;
    printf("input 5 data\n");
    for(i=1;i<=5;i++){
        scanf("%d",&input);
        enqueue(input);
    }
    for(i=1;i<=5;i++){
        value=dequeue();
        printf("%d ",value);
    }

    system("pause");
    return 0;
}