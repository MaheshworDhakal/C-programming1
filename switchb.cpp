#include<stdio.h>
int main()
{
	int x,y,z,p,t,r;
	float intrest;
	char choice;
	printf("enter your choice ");
	printf("enter a for sum b for area c for intrest");
	scanf("%c",&choice);
	switch(choice)
	{case'a':
		case 'A':
			printf("enter the number which you want to sum");
			scanf("%d%d",&x,&y);
			printf("the sum off %d and %d is %d ",x,y,x+y);
			break;
			case'b':
				case'B':
					printf("enter the length and breath of traingle");
					scanf("%d%d",&x,&y);
					printf("the area of rectangle is %d",x*y);
					break;
					case'c':
						case 'C':
							printf("enter the value of p t and r");
							scanf("%d%d%d",&p,&t,&r);
							intrest = (p*t*r)/(100);
							printf("the intrest of the given p t and r is %f",intrest);
							break;
							defeaut:
							printf("you have  enter invalid");
							break;  
							
	}
	return 0;
}
