#include<stdio.h>
int main(){
	int i=8,j=5,k;
	float x=5.0,y=2.5,z;
	k=(j==5)? i:j;
	z=x/y;
	j--;
	printf("k=%d\t z=%f\t j=%d",k,z,j);
	return 0;
}
