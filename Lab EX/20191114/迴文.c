#include<stdio.h>
#include<math.h>
#include<string.h> 

int main(){
	
	while(1){
		
		int i=0,count=0,k,flag=1;
		char input[999],com[999];
		printf("¿é¤J¦r¦ê s:");
		scanf("%s",input);
		while(input[i]!='\0'){
			count++;
			i++;
		}
		for(k=0,i=count-1;k<=(count/2)+1,i>=(count/2)-1;k++,i--){
			if(input[k]!=input[i]){
				flag=0;
				break;
			}
		}
		if(flag==1)
			printf("¬O\n");
		else
			printf("§_\n");
	}
	return 0;
}

