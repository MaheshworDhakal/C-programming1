#include<stdio.h>
int main()
{
int i,m,n;

printf("enter the number between which you want to find odd number");

scanf("%d%d",&m,&n)	;

if(m>n)
{
	for(i=n+1;i<m;i++)
	
	{if(i%2!=0)
	
	{printf("%d  ",i);
	}
	}
}
else
{for(i=m+1;i<n;i++)
if(i%2!=0)
{printf("%d",i);
}
return 0;
}
}
