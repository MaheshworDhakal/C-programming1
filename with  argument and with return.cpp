//with argument with return typse
#include<stdio.h>
int add(int x,int y);
int main (){
	int a,b,sum;
	printf("enter any two number ");
	scanf("%d%d",&a,&b);
	sum=add(a,b);
	printf("the sum of number is %d",sum);
	return 0;
}
int add(int x,int y){
	int sum =0;
	sum=x+y;
	return sum;
}
