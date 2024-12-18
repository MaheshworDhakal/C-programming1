// calcutator to find the given year is leap year or not 
#include<stdio.h>
int main()
{
	
	int year;
	printf(" enter any year\n");
	scanf("%d",&year);
	if((year%400==0)|| (year % 4==0 && year % 100!=0)){
		printf("the %d is the leap year \n",year);
	}else
	{printf("%d is not a leap year ",year);
	}
	return 0;
}
