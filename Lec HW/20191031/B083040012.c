#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double function(int);

double dfunc(int);

int differential(float,float,float,float,int);

void Range(float,float,float,float);

void Graph(int,int,float,float,float,float);

void Differential(int);

void Integral(int,int);

float a,b,c,d;
int low,high;

int main(){
	
	system("color 02");
	
	int p,x1,x2,x;
	printf("輸入X的第3次方係數:");
	scanf("%f",&a);
	printf("輸入X的第2次方係數:");
	scanf("%f",&b);
	printf("輸入X的第1次方係數:");
	scanf("%f",&c);
	printf("輸入X的第0次方係數:");
	scanf("%f",&d);
	Range(a,b,c,d);
	printf("請輸入所求切點的X座標值:");
	scanf("%d",&p);
	printf("請輸入X的區間x1,x2:");
	scanf("%d %d",&x1,&x2);
	Differential(p);
	Integral(x1,x2);
	Graph(low,high,a,b,c,d);

	return 0;
}

double function(int x){
	double value;
	value=a*x*x*x+b*x*x+(c*x)+d;
	return value;
}

double dfunc(int x){
	double value;
	value=(a/4)*pow(x,4)+(b/3)*pow(x,3)+(c/2)*pow(x,2)+d*x;
	return value;
}

int differential(float a,float b,float c,float d,int p){
	float value;
	value=3*a*pow(p,2)+2*b*p+c;
	return value;
}

void Range(float a,float b,float c,float d){
	int i;
	double highpoint,lowpoint;
	if((pow(b,2)-3*a*c)>0){
		if((-2*b+sqrt(4*pow(b,2)-12*a*c))/(6*a)<(-2*b-sqrt(4*pow(b,2)-12*a*c))/(6*a)){
			highpoint=((-2*b-sqrt(4*pow(b,2)-12*a*c))/(6*a));
			lowpoint=((-2*b+sqrt(4*pow(b,2)-12*a*c))/(6*a));
		}
		else{
			highpoint=((-2*b+sqrt(4*pow(b,2)-12*a*c))/(6*a));
			lowpoint=((-2*b-sqrt(4*pow(b,2)-12*a*c))/(6*a));
		}
		if(function(highpoint)*a<=0){
			for(i=(int)highpoint;;i++){
				if(function(i)*function(i+1)<0){
					highpoint=i+1;
					break;
				}
			}
		}
		if(function(lowpoint)*a>=0){
			for(i=(int)lowpoint;;i--){
				if(function(i)*function(i-1)<0){
					lowpoint=i-1;
					break;
				}
			}
		}
	}
	
	else if(pow(b,2)-3*a*c==0){
		if(function(-b/(3*a))==0){
			highpoint=lowpoint=(-2*b-12*a*c)/(6*a);
			low=((int)lowpoint/10-1)*10;
			high=((int)highpoint/10+1)*10;
		}
		else{
			highpoint=lowpoint=(-2*b-12*a*c)/(6*a);
			if(function(highpoint)*a>0){
				for(i=(int)lowpoint;;i--){
					if(function(i)*function(i-1)<0){
						lowpoint=i;
						break;
					}
				}
			}
			else if(function(lowpoint)*a<0){
				for(i=(int)highpoint;;i++){
					if(function(i)*function(i+1)<0){
						highpoint=i;
						break;
					}
				}
			}
		}
	}
	
	else if(pow(b,2)-3*a*c<0){
		highpoint=lowpoint=(-1*b)/(3*a);
		if(function(highpoint)*a>0){
			for(i=(int)lowpoint;;i--){
				if(function(i)*function(i-1)<=0){
					lowpoint=i;
					break;
				}
			}
		}
		else if(function(lowpoint)*a<0){
			for(i=(int)highpoint;;i++){
				if(function(i)*function(i+1)<=0){
					highpoint=i;
					break;
				}
			}
		}
	}
	
	low=((int)lowpoint/10-1)*10;
	high=((int)highpoint/10+1)*10;
}

void Graph(int lowpoint,int highpoint,float a,float b,float c,float d){
	int x,y;
	for(x=lowpoint;x<=highpoint+3;x++){
		for(y=-60;y<=60;y++){
			if(x%10==0&&x!=0&&y==0){
				if(x<0){
					printf("%d",x);
					y+=2;
				}
				else if(x>0){
					printf("%d",x);
					y++;
				}
				else if(y==((int)function(x))*2){
					printf("*");
				}
			}
			else if(x==-1&&y%20==0&&y!=0&&y!=-60){
				if(y<0){
					printf("%d",y/2);
					y+=2;
				}
				else if(y>0&&y!=60){
					printf("%d",y/2);
					y++;
				}
				else if(y==((int)function(x))*2){
					printf("*");
				}
			}
			else if(x==-1&&y==-1){
				printf("0");
			}
			else if(y==0&&x%10!=0&&x<=10){
				if(y==((int)function(x))*2){
					printf("*");
				}
				else{
					printf("|");
				}
			}
			else if(x==0&&y<=60){
				if(y==((int)function(x))*2){
					printf("*");
				}
				else if(y%20==0&&y<60){
					printf("|");
				}
				else if(y==60){
					printf("->  Y軸");
				}
				else{
					printf("-");
				}
			}
			else if(x==highpoint+1&&y==0){
				printf("|");
			}
			else if(x==highpoint+2&&y==0){
				printf("v");
			}
			else if(x==highpoint+3&&y==0){
				printf("X軸");
				y++;
			}
			else if(y==((int)function(x))*2){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}

void Differential(int p){
	double value;
	value=3*a*pow(p,2)+2*b*p+c;
	printf("該點斜率為:%.6lf\n",value);
}

void Integral(int x1,int x2){
	double inte;
	inte=(dfunc(x2))-(dfunc(x1));
	printf("該區域定積分為:%.6lf\n",inte);
}
