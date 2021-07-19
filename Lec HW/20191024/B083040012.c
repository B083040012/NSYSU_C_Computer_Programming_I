#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	
	system("color 02");
	
	int power,i=1,cor[130][100]={0},y;
	double coe[999],dy,sum=0,x;
	printf("請輸入多項式最高次方數:");
	scanf("%d",&power);
	for(i=power;i>=0;i--){
		printf("輸入x的%d次方的係數:",i);
		scanf("%lf",&coe[i]);
	}
	
	for(x=0;x<=120;x++){
		for(i=power;i>=0;i--){
			sum+=coe[i]*pow((x/2)-30,i);
		}
		if((int)sum>=-20&&(int)sum<=40){
			cor[(int)x][(int)sum+20]=1;
		}
		sum=0;
	}
	
	printf("\n\n");
	
	for(y=0;y<=63;y++){
		for(x=0;x<=121;x++){
			if(x==60){
				if(y==0){
					printf("-20");
					x=62;
				}
				else if(y==10){
					printf("-10");
					x=62;
				}
				else if(y==20){
					printf("0");
				}
				else if(y==30){
					printf("10");
					x=61;
				}
				else if(y==40){
					printf("20");
					x=61;
				}
				else if(y==50){
					printf("30");
					x=61;
				}
				else if(y==60){
					printf("40");
					x=61;
				}
				else if(y!=19||y!=21)
					printf("|");
			}
			else if(y==19){
				if(x==19){
					printf("-20");
					x=21;
				}
				else if(x==39){
					printf("-10");
					x=41;
				}
				else if(x==59){
					printf("0");
				}
				else if(x==79){
					printf("10");
					x=80;
				}
				else if(x==99){
					printf("20");
					x=100;
				}
				else if(cor[(int)x][y]==1){
					printf("*");
				}
				else if(x==121){
					printf("\n");
				}
				else{
					printf(" ");
				}
			}
			else if(y==20){
				if(cor[(int)x][y]==1){
					printf("*");
				}	
				else if(x==0||x==20||x==40||x==80||x==100){
					printf("|");
				}
				else if(x==120){
					printf("->\n");
					x=121;
				}
				else if(x==60){
					printf("0");
				}
				else if(x==120){
					printf("\n");
				}
				else if(x!=60||x!=59)
					printf("-");
			}
			else if(y==21&&x==118){
				printf("X軸");
			}
			else if(y==63&&x==62){
				printf("Y軸");
			}
			else if(cor[(int)x][y]==1){
				printf("*");
			}
			else if(x==121){
				printf("\n");
			}
			else
				printf(" ");
		}
	}

	return 0;
}

