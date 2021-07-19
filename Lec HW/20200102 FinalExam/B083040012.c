#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

struct PersonalInfo{
 int ID; // ID
 char* name; // 姓名
 int age; // 年紀
 int gender; // 性別(1=男,2=女)
 int birthday[3]; //出生日期,birthday[0]代表年、birthday[1]代表月、birthday[2]代表日
 struct PersonalInfo* LeftChild; // 在 binary search tree 中的左方子節點
 struct PersonalInfo* RightChild; // 在 binary search tree 中的右方子節點
};

struct PersonalInfo *last1=NULL;
struct PersonalInfo *first1=NULL;

void adddata(int id,char *name,int age,int gender,int *birthday){
	struct PersonalInfo *new1=malloc(sizeof(struct PersonalInfo)),*current1;
	new1->age=age;
	new1->birthday[0]=birthday[0];
	new1->birthday[1]=birthday[1];
	new1->birthday[2]=birthday[2];
	new1->gender=gender;
	new1->ID=id;
	new1->name=name;
	new1->LeftChild=new1->RightChild=NULL;
	if(last1==NULL){
		last1=first1=new1;
	}
	else if(last1->ID>new1->ID){
		new1->RightChild=last1;
		last1->LeftChild=new1;
		last1=new1;
	}
	else{
		current1=last1;
		while((current1->RightChild!=NULL) && !((current1->ID<new1->ID) && (current1->RightChild->ID>new1->ID))){
			current1=current1->RightChild;
		}
		if(current1->RightChild==NULL){
			new1->LeftChild=first1;
			first1->RightChild=new1;
			first1=new1;
		}
		else{
			new1->RightChild=current1->RightChild;
			current1->RightChild->LeftChild=new1;
			current1->RightChild=new1;
			new1->LeftChild=current1;
		}
	}
}

struct PersonalInfo *sim_search(int id){
	struct PersonalInfo *goal=last1;
	while((goal!=NULL) && (goal->ID!=id)){
		goal=goal->RightChild;
	}
	return goal;
}

int deleteid(int id){
	struct PersonalInfo *dele=sim_search(id);
	if(dele==NULL){
		return 0;
	}
	else if(dele==last1){
		dele->RightChild->LeftChild=NULL;
		last1=dele->RightChild;
		return 1;
	}
	else{
		dele->LeftChild->RightChild=dele->RightChild;
		dele->RightChild->LeftChild=dele->LeftChild;
		free(dele);
		return 1;
	}
}

void printdata(struct PersonalInfo *print){
	printf("ID:%d\n",print->ID);
	//printf("Name:%s\n",print->name);
	printf("Age:%d\n",print->age);
	printf("Gender:%d\n",print->gender);
	printf("Birthday:%d %d %d\n",print->birthday[0],print->birthday[1],print->birthday[2]);
	return;
}

void search(){
	int choice,id,gender,age;
	int birthday[3];
	char name[5]={'\0'};
	struct PersonalInfo *found1;
	printf("Please input field to search (1.ID 2.Name 3.Age 4.Gender 5.Birthdaty):");
	scanf("%d",&choice);
	if(choice==1){
		printf("Please input ID:");
		scanf("%d",&id);
		found1=sim_search(id);
	}
	else if(choice==2){
		printf("Please input name:");
		scanf("%s",name);
		found1=last1;
		while((found1!=NULL) && (strcmp(found1->name,name)!=0)){
			found1=found1->RightChild;
		}
	}
	else if(choice==3){
		printf("Please input age:");
		scanf("%d",&age);
		found1=last1;
		while((found1!=NULL) && (found1->age!=age)){
			found1=found1->RightChild;
		}
	}
	else if(choice==4){
		printf("Please input gender:");
		scanf("%d",&gender);
		found1=last1;
		while((found1!=NULL) && (found1->gender!=gender)){
			found1=found1->RightChild;
		}
	}
	else if(choice==5){
		printf("Please input birthday:");
		scanf("%d %d %d",&birthday[0],&birthday[1],&birthday[2]);
		found1=last1;
		while((found1!=NULL) && (found1->birthday[0]!=birthday[0]) && (found1->birthday[1]!=birthday[1]) && (found1->birthday[2]!=birthday[2])){
			found1=found1->RightChild;
		}
	}
	if(found1==NULL){
		printf("Not Found\n");
		return;
	}
	else{
		printdata(found1);
		printf("Search completed\n");
		return;
	}
}


/*void writedata(FILE *fp){
	struct PersonalInfo *write=last1;
	while(write!=NULL){
		fprintf(fp,"%d ",write->ID);
		fprintf(fp,"%s ",write->name);
		fprintf(fp,"%d ",write->gender);
		fprintf(fp,"%d ",write->gender);
		fprintf(fp,"%d/%d/%d",write->birthday[0],write->birthday[1],write->birthday[2]);
		write=write->RightChild;
	}
}*/

/*struct node_1{
	int data;
	struct node_1 *prev;
};

struct node_1 *back_1=NULL;
struct node_1 *front_1=NULL;
struct node_1 *back_2=NULL;
struct node_1 *front_2=NULL;

void myenqueue(int num,struct node *back,struct node *front){
	struct node *new=malloc(sizeof(struct node_1));
	new->data=num;
	new->prev=NULL;
	if(back==NULL){
		front=new;
		back=new;
	}
	else{
		back->prev=new;
		back=new;
	}
}*/

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

int main(){
	
	printf("第一題:\n=================\n");
	int func1,ID,con1,age,gender;
	int birthday[3];
	char name[5]={'\0'};
	FILE *fp2=fopen("data.txt","r");
	while(!feof(fp2)){
		fscanf(fp2,"%d",&ID);
		fscanf(fp2,"%s",&name);
		fscanf(fp2,"%d",&age);
		fscanf(fp2,"%d",&gender);
		fscanf(fp2,"%d/%d/%d",&birthday[0],&birthday[1],&birthday[2]);
		adddata(ID,name,age,gender,birthday);
	}
	fclose(fp2);
	while(1){
		printf("1.Add\n2.Delete\n3.Search\n4.Exit\nOption:");
		scanf("%d",&func1);
		if(func1==1){
			printf("Please input new data\n");
			printf("ID:");
			scanf("%d",&ID);
			printf("Name:");
			scanf("%s",name);
			printf("Age:");
			scanf("%d",&age);
			printf("Gender:");
			scanf("%d",&gender);
			printf("Birthday:");
			scanf("%d %d %d",&(birthday[0]),&(birthday[1]),&(birthday[2]));
			adddata(ID,name,age,gender,birthday);
			printf("Data created\n");
		}
		else if(func1==2){
			printf("Please input ID:");
			scanf("%d",&ID);
			con1=deleteid(ID);
			if(con1==0){
				printf("Not Found\n");
			}
			else{
				printf("Data Deleted\n");
			}
		}
		else if(func1==3){
			search();
		}
		else{
			printf("Have a good day\n");
			break;
		}
	}
	
	FILE *fp1=fopen("data.txt","w");
	struct PersonalInfo *write=last1;
	while(write!=NULL){
		fprintf(fp1,"\n%d ",write->ID);
		fprintf(fp1,"%s ",write->name);
		fprintf(fp1,"%d ",write->gender);
		fprintf(fp1,"%d ",write->gender);
		fprintf(fp1,"%d/%d/%d",write->birthday[0],write->birthday[1],write->birthday[2]);
		write=write->RightChild;
	}
	fclose(fp1);
	
	printf("\n=================\n第二題:\n=================\n");
	/*int i,input1,input2;
	char j;
	printf("List1=");
	for(i=1;i<=7;i++){
		scanf("%d%c%c",&input1,&j,&j);
		myenqueue(input1,back_1,front_1);
	}
	printf("List2=");
	for(i=1;i<=7;i++){
		scanf("%d%c%c",&input2,&j,&j);
		myenqueue(input2,back_2,front_2);
	}*/
	
	printf("\n=================\n第三題:\n=================\n");
	
	int time,k;
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

