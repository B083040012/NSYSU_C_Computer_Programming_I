#include<stdio.h>
#include<math.h>

int main(){
	char a,b,c,d,e;
	printf("Please input first side:");
	scanf(" %c",&a);
	printf("Please input second side:");
	scanf(" %c",&b);
	printf("Please input third side:");
	scanf(" %c",&c);
	
	printf("First's ASCII is:%d",a);
	printf("\nSecond's ASCII is:%d",b);
	printf("\nThird's ASCII is:%d",c);
	
	if(a+b>c){
		printf("\nIt is a triangle");
			if(a*a+b*b<c*c){
				printf("\nIt is a Obtuse triangle");
	}
			else if(a*a+b*b==c*c){
				printf("\nIt is a Right triangle");
	}
			else if(a*a+b*b>c*c){
				printf("\nIt is a Acute triangle");
	}
}
	else{
		printf("\nIt is not a triangle");
}
	return 0;
}

