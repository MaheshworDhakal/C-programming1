#include<stdio.h>
int main(){
	int a,b,c,p,t,r,intrest;
	char choice;
	printf(" enter the coic");
	printf("a for add b for odd c for intrest");
	scanf("%c",&choice);
	switch(choice)
	{ case 'a':
	case'A':
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("the sum of two number is %d",a+b);
	break;
	case 'b':
	case'B':
	printf(" enter the number");
	scanf("%d",&c);
	if(c%2==0){printf("the %d is even",c);
	}else{printf("the %d is odd",c);
	}
	break;
	case'c':
		case 'C':
			printf("enter the value of p t r");
			scanf("%d%d%d",&p,&t,&r);
			intrest=(p*t*r)/100;
			printf("the intrest is %d",intrest);
			break;
			default:
				printf("you have enter invalid");
				break;
		
	
	} return 0;
}
