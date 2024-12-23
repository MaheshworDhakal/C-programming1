//with out agrument with return types
#include<stdio.h>
int add();
int main (){
	
	printf("the sum is %d",add());
	return 0;
}
int add(){
int a,b,sum;
printf("enter any two number ");
scanf("%d%d",&a,&b);
sum=a+b;
return sum;
}
