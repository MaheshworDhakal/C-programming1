#include <stdio.h>
#define PI 3.14
// with argument and with return types
float circle( int radius)
{float area;
area =radius * radius *PI;
return area;
}
int main(){
	int radius;
	float area;
	printf("enterthe radius of circle");
	scanf("%d",&radius);
area=circle( radius);
	printf("the area of circle is %f",area);
	return 0;
}

