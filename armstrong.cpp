#include<stdio.h>
#include<math.h>
int main(){
	int n,rem,arm=0,count=0,n1,n2;
	printf("enter the number");
	scanf("%d",&n);
	n1=n;
	n2=n1;
	while(n!=0)
	{n=n/10;
	count=count+1;
	}
	while(n1!=0)
	{rem-n1%10;
	arm+=pow(rem,count);
	n1=n1/10;
	}
	if(arm==n2){printf("%d is a armstrong number",n2);
	}else
	{printf("%d is not a armstrong number",n2);
	
	}
	return 0;
}
