#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void swap(int*a,int*b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

double bubble_sort(int *num,int size){
	int i,j,t[size];
	clock_t start,end;
	double duration;
	for(i=0;i<=size-1;i++){
		t[i]=num[i];
	}
	start=clock();
	for(i=0;i<=size-1;i++){
		for(j=size-2;j>=i;j--){
			if(t[j]>t[j+1]){
				swap(&t[j],&t[j+1]);
			}
		}
	}
	end=clock();
	//printf("\n\nstart=%u,end=%u\n\n",start,end);
	duration=(double)(end-start)/1000;
	//for(i=0;i<=size-1;i++){
	//	printf("%d ",t[i]);
	//}
	return duration;
}

double selection_sort(int *num,int size){
	int i,j,max,t[size];
	clock_t start,end;
	double duration;
	for(i=0;i<=size-1;i++){
		t[i]=num[i];
	}
	start=clock();
	for(i=size-1;i>=1;i--){
		max=i;
		for(j=i-1;j>=0;j--){
			if(t[j]>t[max]){
				max=j;
			}
		}
		swap(&t[i],&t[max]);
	}
	end=clock();
	duration=(double)(end-start)/1000;
	//for(i=0;i<=size-1;i++){
	//	printf("%d ",t[i]);
	//}
	return duration;
}

double insertion_sort(int *num,int size,int *sort){
	int i,j,temp,t[size];
	clock_t start,end;
	double duration;
	for(i=0;i<=size-1;i++){
		t[i]=num[i];
	}
	start=clock();
	for(i=1;i<=size-1;i++){
		temp=t[i];
		j=i;
		while((j>0) && (t[j-1]>temp)){
			t[j]=t[j-1];
			j--;
		}
		t[j]=temp;
	}
	for(i=0;i<=size-1;i++){
		sort[i]=t[i];
		//printf("%d ",t[i]);
	}
	end=clock();
	duration=(double)(end-start)/1000;
	return duration;
}

int median(int*num,int size){
	int m[size],temp,i,j;
	for(i=0;i<=size-1;i++){
		m[i]=num[i];
	}
	//insertion sort
	for(i=1;i<=size-1;i++){
		temp=m[i];
		j=i;
		while((j>0) && (m[j-1]>temp)){
			m[j]=m[j-1];
			j--;
		}
		m[j]=temp;
	}
	if(size%2==0){
		return ((m[size/2]+m[size/2-1])/2);
	}
	else{
		return m[size/2];
	}
}

int binary_searching(int *num,int size,int target,int *count){
	int min=0,max=size-1,g;
	(*count)=0;
	while(max>=min){
		if(num[(min+max)/2]==target){
			g=(min+max)/2;
			(*count)++;
			return g+1;
		}
		else if(num[(min+max)/2]<=target){
			min=(min+max)/2+1;
			(*count)++;
		}
		else{
			max=(min+max)/2-1;
			(*count)++;
		}
	}
	return -1;
}

int main(){
	
	//sort timing comparation
	int size;
	printf("Input the size:");
	scanf("%d",&size);
	
	srand(time(NULL));
	
	int i,num[size],sort[size];
	//printf("Unsorted array:\n");
	for(i=0;i<=size-1;i++){
		num[i]=rand()%1999+1;
		//printf("%d ",num[i]);
		//if((i+1)%20==0){
		//	printf("\n");
		//}
	}
	
	printf("\nThe time running bubble sort:%f sec",bubble_sort(num,size));
	printf("\nThe time running selection sort:%f sec",selection_sort(num,size));
	printf("\nThe time running insertion sort:%f sec",insertion_sort(num,size,sort));
	
	printf("\n\n\nSorted array:\n\n");
	for(i=0;i<=size-1;i++){
		printf("%5d",sort[i]);
		if((i+1)%10==0){
			printf("\n");
		}
	}
	
	//median finding
	printf("\nThe median is:%d",median(num,size));
	
	//binary searching
	int target,times=0;
	printf("\n\n\nEnter the number you want to find:");
	scanf("%d",&target);
	if(binary_searching(sort,size,target,&times)==-1){
		printf("The value is not found");
	}
	else{
		printf("\nIt's the %dth element in array",binary_searching(sort,size,target,&times));
		printf("\nIt's found by %d times",times);
	}
	
	
	return 0;
}

