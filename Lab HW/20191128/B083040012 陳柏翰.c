#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

char *len(char *a,char*b){
	if(strlen(a)>strlen(b)){
		puts(a);
		return a;
	}
	else if(strlen(a)<strlen(b)){
		puts(b);
		return b;
	}
}

void Reverse(char *a){
	int j;
	for(j=strlen(a)-1;j>=0;j--){
		printf("%c",a[j]);
	}
}

int main(){
	
	char in_1[999],in_2[999];
	gets(in_1);
	gets(in_2);
	Reverse(len(in_1,in_2));

	return 0;
}

