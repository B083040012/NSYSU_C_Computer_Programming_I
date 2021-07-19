#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int x,y;
	char alpha='A';
	for(y=1;y<=8;y++){
		for(x=1;x<=8;x++){
			if((x+y)%2==0){
				printf("%c",alpha);
				alpha++;
				if(alpha>'Z')
					alpha='A';
			}
			else{
				printf("_");
			}
		}
		printf("\n"); 
	}

	return 0;
}

