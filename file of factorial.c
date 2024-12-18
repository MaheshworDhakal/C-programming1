// to find the factorial of number 
#include<stdio.h>
int main(){
	int i,n,fact=1;
	printf("enter any number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{fact=fact*i;
	}
	printf("the fact of number is %d",fact);
	return 0;
	
}
