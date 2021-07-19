#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	
	int i=0,count=0;
	char input[999],inverse[999];
	printf("¿é¤J¦r¦ês:");
	fgets(input,sizeof(input),stdin);
	while(input[i]!='\0'){
		count++;
		i++;
	}
	for(i=count;i>=0;i--){
		printf("%c",input[i]);
	}

	return 0;
}

