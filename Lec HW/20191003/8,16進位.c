#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int oc[99999],hex[99999],i=0,a,b,in;
	double input,temp;
	
	printf("整數:");
	scanf("%lf",&input);
	
	temp=(int)input;
	
	if(input-temp>0){
		printf("Error!");
	}
	else{
		in=(int)input;
		while(in>=8){
			a=in%8;
			oc[i]=a;
			i++;
			in=in/8;
		}
		oc[i]=in;
		printf("八進位:");
		for(i=i;i>=0;i--){
			printf("%d",oc[i]);
		}
		
		i=0;
		in=temp;
		
		while(in>=16){
			a=in%16;
			hex[i]=a;
			i++;
			in=in/16;
		}
		hex[i]=in;
		printf("\n十六進位:");
		for(i=i;i>=0;i--){
			if(hex[i]>=10){
				printf("%c",(char)(hex[i]+55));
			}
			else{
				printf("%d",hex[i]);
			}
		}
	}

	return 0;
}

