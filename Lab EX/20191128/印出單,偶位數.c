#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

void print(char *a){
	int i;
	printf("³æ:");
	for(i=0;i<=strlen(a)-2;i+=2){
		printf("%c ",*(a+i));
	}
	printf("\n°¸:");
	for(i=1;i<=strlen(a)-2;i+=2){
		printf("%c ",*(a+i));
	}
}

int main(){
	
	char input[999];
	fgets(input,999,stdin);
	print(input);

	return 0;
}

