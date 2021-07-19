#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include<time.h>

struct node{
    char alpha;
    struct node *next;
};

struct node *top=NULL;

void push(char input){
    struct node *new=malloc(sizeof(struct node));
    new->alpha=input;
    new->next=NULL;
    new->next=top;
    top=new;
}

char pop(){
    struct node *temp;
    char word;
    if(top==NULL){
        return 'e';
    }
    else{
        temp=top;
        word=temp->alpha;
        top=top->next;
        free(temp);
        return word;
    }
}

int check(char word){
    char goal;
    goal=pop();
    if(goal==word){
        return 1;
    }
    else if(goal=='e'){
        return 0;
    }
    else{
        return -1;
    }
}

int main(void)
{
    int i=0,j=1;
    char input[999]={'\0'};
    scanf("%s",input);
    while(input[i]!='\0'){
        if((input[i]=='{') || (input[i]=='[') || (input[i]=='(')){
            push(input[i]);
        }
        else if((input[i]=='}') || (input[i]==']')){
            j=check(input[i]-2);
            if(j==0 || j==-1){
                printf("Invalid");
                break;
            }
        }
        else if(input[i]==')'){
            j=check(input[i]-1);
            if(j==0 || j==-1){
                printf("Invalid");
                break;
            }
        }
        i++;
    }
    if(pop()=='e' && j!=0 && j!=-1){
        printf("Valid");
    }

    system("pause");
    return 0;
}