#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include<time.h>

int checkdigit(int num){
    int i=0;
    if(num==0){
        i=1;
    }
    else{
        while(num>=pow(10,i)){
            i++;
        }
    }
    //printf("digit:%d\n",i);
    return i;
}

int main(void)
{
    int n,j,i,num1,num2;
    //double num1,num2;
    while(1){
        printf("\nInput the digit(2,4,6,8),enter 0 to quit:");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        else{
            for(i=0;i<pow(10,n);i++){
                //printf("i=%d\n",i);
                /*if(checkdigit(i)<=(n/2)){
                    if(pow(i,2)==i){
                        for(j=1;j<=n-checkdigit(i);j++){
                            printf("0");
                        }
                        printf("%d\n",i);
                    }
                }*/
                //else{
                    num1=i/pow(10,n/2);
                    num2=i-num1*pow(10,n/2);
                    //printf("num1=%d,num2=%d,num1+num2=%d,pow=%d\n",num1,num2,num1+num2,(int)pow((num1+num2),2));
                    if((int)pow((num1+num2),2)==i){
                        for(j=1;j<=n-checkdigit(i);j++){
                            printf("0");
                        }
                        printf("%d\n",i);
                    }
                //}
            }
        }
    }
    system("pause");
    return 0;
}