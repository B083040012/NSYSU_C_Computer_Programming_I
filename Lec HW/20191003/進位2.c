#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	
	float input;
	int i=0,in;
	
	printf("整數:");
	scanf("%d",&input);
	
	in=(int)input;
	
	if(input-in>0){
		printf("Error!");
	}
	
	else{
		while(in>pow(8,i)){
			i++;
		}
		i--;
		printf("八進位:");
		for(i;i>=1;i--){
			printf("%d",in/(int)pow(8,i));
			in=in%(int)pow(8,i);
		}
		printf("%d",in);
			
		i=0;
		in=(int)input;
		while(in>pow(16,i)){
			i++;
		}
		i--;
		printf("\n十六進位:");
		for(i;i>=0;i--){
			if(i>=1){
				if(in/(int)pow(16,i)>=10){
					printf("%c",(char)(in/pow(16,i)+55));
				}
				else{
					printf("%d",in/(int)pow(16,i));
				}
				in=in%(int)pow(16,i);
			}
			else{
				if(in>=10){
					printf("%c",(char)(in+55));
				}
				else{
					printf("%d",in);
				}
			}
		}
	}

	return 0;
}

