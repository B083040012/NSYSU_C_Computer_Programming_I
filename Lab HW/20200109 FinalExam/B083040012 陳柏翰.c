#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int checkdigit(int num){
    int i=0;
    if(num==0){
        i=1;
    }
    else{
        while(num>=pow(10,i)){
            i++;
        }
    }
    //printf("digit:%d\n",i);
    return i;
}

int checkprime(int num){
	int i;
	if(num==1){
		return 1;
	}
	else if(num==2){
		return 1;
	}
	else{
		for(i=2;i<=num-1;i++){
			if(num%i==0){
				return 0;
			}
		}
		return 1;	
	}
}

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

/*struct brick{
	int num;
	struct brick *up;
	struct brick *down;
};

struct location{
	struct brick *bot;
	struct location *right;
	struct location *left;
	int lo_num;
};

struct location *lo_last=NULL;
struct location *lo_front=NULL;

struct location *createlocation(int n){
	struct location *new=malloc(sizeof(struct location));
	new->lo_num=n;
	new->left=new->right=NULL;
	if(n==0){
		lo_last=lo_front=new;
	}
	else{
		new->left=lo_front;
		lo_front->right=new;
		lo_front=new;
	}
	return new;
}

int createbrick(int n,struct location *lo){
	struct brick *new=malloc(sizeof(struct brick));
	new->num=n;
	new->down=new->up=NULL;
	lo->bot=new;
}

int moveonto(int a,int b){
	
}

void printbrick(int time){
	int i;
	struct location *current=lo_last;
	for(i=0;i<=time;i++){
		current=current->right;
	}
	struct brick *print=current->bot;
	while(print->up!=NULL){
		printf("%d: ",print->num);
	}
}*/



int main(){
	
	printf("=========\n第一題\n=========\n");
	printf("Name:陳柏翰\nStudent ID:B083040012\n");
	printf("\n=========\n第二題\n=========\n");
	int n,j,i,num1,num2;
    while(1){
        printf("\nInput the digit(2,4,6,8),enter 0 to quit:");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        else{
            for(i=0;i<pow(10,n);i++){
                    num1=i/pow(10,n/2);
                    num2=i-num1*pow(10,n/2);
                    if((int)pow((num1+num2),2)==i){
                        for(j=1;j<=n-checkdigit(i);j++){
                            printf("0");
                        }
                        printf("%d\n",i);
                    }
            }
        }
    }
    
    printf("\n=========\n第三題\n=========\n");
    char input_2[20]={'\0'};
    int sum;
    while(1){
    	for(j=0;j<=19;j++){
    		input_2[j]='\0';
		}
    	printf("Input the string(Enter 0 to quit):");
		scanf("%s",input_2);
		if(input_2[0]=='0'){
			break;
		}
		else{
			i=0;
			sum=0;
			while(input_2[i]!='\0'){
				//printf("%c \n",input_2[i]);
				if('a'<=input_2[i] && input_2[i]<='z'){
					sum=sum+((int)input_2[i]-(int)'a'+1);
				}
				else{
					sum=sum+((int)input_2[i]-(int)'A'+27);
				}
				i++;
			}
			//printf("%d\n",sum);
			if(checkprime(sum)==1){
				printf("It is a prime word\n");
			}
			else{
				printf("It is not a prime word\n");
			}
		}
	}
	
	printf("\n=========\n第四題\n=========\n");
	int num_4,bricknum1,bricknum2,k;
	char action[4],direction[4];
	printf("Input the number of brick(s):");
	scanf("%d",&num_4);
	int location[num_4][num_4];
	for(i=0;i<num_4;i++){
		location[i][0]=i;
		for(n=1;n<num_4;n++){
			location[i][n]=-1;
		}
	}
	while(1){
		scanf("%s",&action);
		if(strcmp(action,"quit")==0){
			break;
		}
		else if(strcmp(action,"move")==0){
			scanf("%d%s%d",&bricknum1,&direction,&bricknum2);
			if(strcmp(direction,"onto")==0){
				;
			}
			else{
				;
			}
		}
		else{
			scanf("%d%s%d",&bricknum1,&direction,&bricknum2);
			
		}
	}
	
	if(num_4==1){
		printf("0:");
		printf("%d ",location[0][0]);
	}
	else{
		for(i=0;i<num_4;i++){
			k=0;
			printf("%d:",i);
			while(location[i][k]!=-1){
				printf("%d ",location[i][k]);
				k++;
			}
			printf("\n");
		}
	}
	
	
	
	
	
	printf("\n=========\n第五題\n=========\n");
	int time;
	scanf("%d",&time);
	int conse[time];
	for(k=0;k<time;k++){
		int i=0;
		int j=1;
		char input[999]={'\0'};
	    scanf("%s",input);
	    while(input[i]!='\0'){
	        if((input[i]=='{') || (input[i]=='[') || (input[i]=='(')){
	            push(input[i]);
	        }
	        else if((input[i]=='}') || (input[i]==']')){
	            j=check(input[i]-2);
	            if(j==0 || j==-1){
	                //printf("Invalid");
	                conse[k]=0;
	                break;
	            }
	        }
	        else if(input[i]==')'){
	            j=check(input[i]-1);
	            if(j==0 || j==-1){
	                //printf("Invalid");
	                conse[k]=0;
	                break;
	            }
	        }
	        i++;
	    }
	    if(pop()=='e' && j!=0 && j!=-1){
	        //printf("Valid");
	        conse[k]=1;
	    }
	    else{
	    	conse[k]=0;
		}
	}
	for(k=0;k<time;k++){
		if(conse[k]==0){
			printf("No\n");
		}
		else if(conse[k]==1){
			printf("Yes\n");
		}
	}
	

	return 0;
}

