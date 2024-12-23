#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d;
	float r1,r2;
	float x,y;
	printf("enter the value of a,b,c from the equation ");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0)
	{
		printf("the given equation is not a quadatic");
	}
	d=(b*b)-(4*a*c);
	if(d>=0)
	{
	float r1=(-b+sqrt(d))/(2*a);
	float r2=(-b-sqrt(d))/(2*a);
	printf("the root of equation are %f and %f ",r1,r2);
	printf("\n and the root are real and distinct");
	}else
	{
		x=(-b)/(2*a);
		y=sqrt(-a)/(2*a);
		printf("the root of equation is %f and %f",x,y);
		printf("\n and the root are imiginary");
	}
	return 0;
}


