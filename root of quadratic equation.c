// root of quadratic equation 
#include<stdio.h>
#include<math.h>
int main()
{
	
float a,b,c,d,r1,r2,im,r4;
printf("enter the value of a,b,c \n");
scanf("%f%f%f",&a,&b,&c);
d=(b*b)-4*a*c;
if(d==0)
{ printf("the root are real and equal");
r1=(-b)/(2*a);
r2=(-b)/(2*a);
printf("root1;%f   and root2=%f",r1,r2);

}else if(d>0){
	printf(" the root are real and distinct");
	r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
	printf("root1;%f   and root2=%f",r1,r2);	
}
else{
	printf("the root are imiginary");
	r4=(-b)/(2*a);
	im=sqrt(-d)/(2*a);
	printf("root1;%f+%f i   and root2:%f-%fi",r4,im,r4,im);
	
}
return 0;
}
