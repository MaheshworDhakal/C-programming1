#include<stdio.h>
#include<string.h>
int main ()
{
	char str[]="nepal";
	int i,j,z=1;
	for(i=0;i<6;i++)
	{
		for(j=0;j<=i;j++)
		{
			
			printf("%d\t%c\t",z,str[j]);
		}
		printf("\n");
		z=z+i;
	}
	return 0;
}
