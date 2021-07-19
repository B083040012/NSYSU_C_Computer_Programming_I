#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

void selection_sort(int num_sel[],int size){
	int i,j,max,temp;
	for(i=size;i>=1;i--){
		max=i;
		for(j=0;j<=i-1;j++){
			if(num_sel[max]<num_sel[j]){
				max=j;
			}
		}
		temp=num_sel[i];
		num_sel[i]=num_sel[max];
		num_sel[max]=temp;
	}
}

void insertion_sort(int num_inser[],int size){
	int i,k,temp;
	for(i=size-2;i>=0;i--){
		temp=num_inser[i];
		k=i;
		while((k<size) && (num_inser[k+1]<temp)){
			num_inser[k]=num_inser[k+1];
			k++;
		}
		num_inser[k]=temp;
	}
}

int main(){
	
	//selection sort,sizeof()
	int num[6]={13,2,15,4,12,9};
	int i;
	
	printf("Before selection sort:");
	for(i=0;i<=5;i++){
		printf("%d ",num[i]);
	}
	
	selection_sort(num,6);
	
	printf("\nsize of num[0](byte):%d",sizeof(num[0]));
	printf("\nsize of num(byte):%d",sizeof(num));
	
	printf("\nAfter selection sort:");
	for(i=0;i<=5;i++){
		printf("%d ",num[i]);
	}
	
	printf("\n\n===========\n\n");
	
	//insertion sort
	int sort[10]={3,10,4,6,8,9,7,2,1,5};
	
	printf("\nBefore insertion sort:");
	for(i=0;i<=9;i++){
		printf("%d ",sort[i]);
	}
	
	insertion_sort(sort,10);
	
	printf("\nAfter insertion sort:");
	for(i=0;i<=9;i++){
		printf("%d ",sort[i]);
	}
	

	return 0;
}

