#include"B083040012.h"

int main(){
	FILE *fp1=fopen("input.txt","r");
	int size,input[99999],i=0,target,index;
	fscanf(fp1,"%d",&size);
	while(!feof(fp1)){
		fscanf(fp1,"%d",&input[i]);
		//printf("aaa%d ",input[i]);
		i++;
	}
	mysort(input,size);
	printf("Sorted finished\n");
	while(1){
		printf("Please input your target:");
		if(scanf("%d",&target)==EOF){
			break;
		}
		else{
			//index=myBinarySearch(input,target,0,size-1);
			//printf("\n%d\n",index);
			if((myBinarySearch(input,target,0,size-1))==-1){
				printf("target not found\n");
			}
			else{
				printf("target found at index %d\n",myBinarySearch(input,target,0,size-1));
			}
		}
	}
	fclose(fp1);
	
	return 0;
}
