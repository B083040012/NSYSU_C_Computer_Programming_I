#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

void printaddress(char b[]){
	printf("\nvalue of b:%p\naddress of b(&b):%p\naddress of b[0]:%p",b,&b,&b[0]);

}

int main(){
	
	//check the address of array
	char abc[4];
	printf("address of abc:%p\naddress of abc(&abc):%p\naddress of abc[0]:%p\naddress of abc[1]:%p\naddress of abc[2]:%p",abc,&abc,&abc[0],&abc[1],&abc[2]);
	
	
	printf("\n\n===========\n\n");
	//check the address of array in the function
	char a[4];
	printf("address of a:%p\naddress of a(&a):%p",a,&a);
	printaddress(a);

	return 0;
}

