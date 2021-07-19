#include"B083040012.h"

void mysort(int *array,int size){
	int i,j,temp;
	for(i=size-2;i>=0;i--){
		temp=array[i];
		j=i;
		while((j<size-1) && (array[j+1]<temp)){
			array[j]=array[j+1];
			j++;
		}
		array[j]=temp;
	}
	/*for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}*/
}

int myBinarySearch(int *array,int target,int head,int tail){
	int min=head,max=tail,num;
	while(max>=min){
		if(array[(min+max)/2]==target){
			return ((min+max)/2)+1;
		}
		else if(array[(min+max)/2]>target){
			max=(min+max)/2-1;
		}
		else{
			min=(min+max)/2+1;
		}
	}
	return -1;
}
