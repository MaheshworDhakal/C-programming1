#include<stdio.h>
int main(){
	int i,number,flag=1;
	printf("enter the number ");
	scanf("%d",& number);
	
	if(number<0){printf("%d is not a prime number",number);}else{
	
	
	for(i=2;i<=number;i++){
		
		
	
		if(number%i==0){flag=0;}
		}
	
	if(flag==0){printf("the %d is not a prime number",number);
	
	}else{printf("the %d is a prime number",number);}
	return 0;
}}
