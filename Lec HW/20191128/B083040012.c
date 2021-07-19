#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int bubble_sort(int*num,int size,int *compare){
	FILE *file_b=fopen("B083040012.bubble.txt","a");
	int count=0,i,j,temp_b[2000];
	(*compare)=0;
	//for(i=0;i<=size-1;i++){
	//	printf("%d ",num[i]);
	//}
	//printf("\n\n\n\n\n");
	for(i=0;i<=size-1;i++){
		temp_b[i]=num[i];
		//printf("%d ",temp_b[i]);
	}
	//printf("\n\n\n\n\n\n");
	for(i=0;i<=size-1;i++){
		for(j=size-2;j>=i;j--){
			if(temp_b[j]>temp_b[j+1]){
				swap(&temp_b[j],&temp_b[j+1]);
				count++;
				(*compare)++;
			}
			else{
				(*compare)++;
			}
		}
	}
	if(size==500){
		fprintf(file_b,"Bubble sort result:\n");
	}
	for(i=0;i<=size-1;i++){
		//printf("%d ",temp_b[i]);
		fprintf(file_b,"%d ",temp_b[i]);
	}
	//printf("\n\n\n\n\n");
	fclose(file_b);
	return count;
}

int selection_sort(int*num,int size,int *compare){
	FILE *file_s=fopen("B083040012.selection.txt","a");
	int count=0,i,j,min,temp_s[2000]={0};
	(*compare)=0;
	//for(i=0;i<=size-1;i++){
	//	printf("%d ",num[i]);
	//}
	for(i=0;i<=size-1;i++){
		temp_s[i]=num[i];
	}
	for(i=0;i<size-1;i++){
		min=i;
		for(j=i+1;j<size;j++){
			if(temp_s[min]>temp_s[j]){
				min=j;
				(*compare)++;
			}
			else{
				(*compare)++;
			}
		}
		swap(&temp_s[i],&temp_s[min]);
		count++;
	}
	if(size==500){
		fprintf(file_s,"Selection sort result:\n");
	}
	for(i=0;i<=size-1;i++){
		//printf("%d ",temp_s[i]);
		fprintf(file_s,"%d ",temp_s[i]);
	}
	fclose(file_s);
	return count;
}

int insertion_sort(int *num,int size,int *compare){
	FILE *file_i=fopen("B083040012.insertion.txt","a");
	int i,j,point,count=0,temp_i[2000]={0};
	(*compare)=0;
	//for(i=0;i<=size-1;i++){
	//	printf("%d ",num[i]);
	//}
	for(i=0;i<=size-1;i++){
		temp_i[i]=num[i];
	}
	for(i=1;i<size;i++){
		point=temp_i[i];
		j=i;
		while((j>0) && (temp_i[j-1]>point)){
			(*compare)++;
			temp_i[j]=temp_i[j-1];
			j--;
		}
		temp_i[j]=point;
		(*compare)++;
		count++;
	}
	if(size==500){
		fprintf(file_i,"Insertion sort result:\n");
	}
	for(i=0;i<=size-1;i++){
		fprintf(file_i,"%d ",temp_i[i]);
	}
	fclose(file_i);
	return count;
}

int main(){
	
	int num_1[500],num_2[1000],num_3[2000],num_a[2000],num_b[2000],i,compare_b=0,compare_s=0,compare_i=0;
	
	FILE *file=fopen("input.txt","r");
	for(i=0;i<=3499;i++){
		if(i<=499){
			fscanf(file,"%d",&num_1[i]);
			//printf("%d ",num_1[i]);
		}
		else if(i<=1499 && i>=500){
			fscanf(file,"%d",&num_2[i-500]);
			//printf("%d ",num_2[i-500]);
		}
		else if(i<=3499 && i>=1500){
			fscanf(file,"%d",&num_3[i-1500]);
			//printf("%d ",num_3[i]);
		}
	}
	//printf("\n\n\n\n\n\n");
	fclose(file);

	printf("Sequence 1      bubble          selection       insertion\n");
	printf("------------------------------------------------------------");
	printf("\nswap times      %d           %d             %d",bubble_sort(num_1,500,&compare_b),selection_sort(num_1,500,&compare_s),insertion_sort(num_1,500,&compare_i));
	printf("\ncompare times   %d          %d          %d",compare_b,compare_s,compare_i);
	printf("\n------------------------------------------------------------");
	printf("\nSequence 2      bubble          selection       insertion\n");
	printf("------------------------------------------------------------");
	printf("\nswap times      %d          %d             %d",bubble_sort(num_2,1000,&compare_b),selection_sort(num_2,1000,&compare_s),insertion_sort(num_2,1000,&compare_i));
	printf("\ncompare times   %d          %d          %d",compare_b,compare_s,compare_i);
	printf("\n------------------------------------------------------------\n");
	printf("Sequence 3      bubble          selection       insertion\n");
	printf("------------------------------------------------------------");
	printf("\nswap times      %d         %d            %d",bubble_sort(num_3,2000,&compare_b),selection_sort(num_3,2000,&compare_s),insertion_sort(num_3,2000,&compare_i));
	printf("\ncompare times   %d         %d         %d",compare_b,compare_s,compare_i);

	return 0;
}

