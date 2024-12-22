#include<stdio.h>
int main(){
	
	int i,num;
	printf("enter any number");
	scanf("%d",&num);
	if(num<0){printf("%d is not a prime number",num);
	}else{
		for(i=2;i<num;i++){if(num%i==0){printf("%d is not a prime number ",num);
		}else{printf("%d is a prime number",num);
		}
		}
	}if
	(num==1|| num==2){printf("%d is prime number",num);
	}
	
	return 0;
}
