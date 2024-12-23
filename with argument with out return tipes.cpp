//with argument without return #
#include<stdio.h>
void add(int x,int y);
int main(){
	int a,b;
	printf("enter  any two number");
	scanf("%d%d",&a,&b);
	add(a,b);
	return 0;
}
void add(int x,int y){
	int sum=0;
	sum=x+y;
	printf("the sum of number is %d",sum);
}
