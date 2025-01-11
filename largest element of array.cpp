//largelest element in an array
#include<stdio.h>
int main (){
	int i,m,largest;
	printf("enter the size of array\n ");
	scanf("%d",&m);
	int mat[m];
	for(i=1;i<=m;i++)
	{printf(" enter the element %d of array\n",i);
	scanf("%d",&mat[i]);
	}
for(i=1;i<=m;i++){printf("%d\t",mat[i]);
}
largest=mat[1];
for(i=1;i<=m;i++)
{

if(largest<mat[i]){largest=mat[i];
}
}
printf("\nthe largest num is %d\n",largest);
return 0;
}
