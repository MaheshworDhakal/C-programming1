// largest number in matrix
#include<stdio.h>
int main(){
	int i,j,m,n,largest;
	printf("enter the  size of array\n");
	scanf("%d%d",&m,&n);
int mat[m][n];
for(i=1;i<=m;i++){
	for(j=1;j<=n;j++){printf("\nenter the element of %d,%d\n",i,j);
	scanf("%d",&mat[i][j]);
	
	}
}
for(i=1;i<=m;i++){
	for(j=1;j<=n;j++){printf("%d\t",mat[i][j]);
	} printf("\n");}

largest=mat[1][1];
for(i=1;i<=m;i++){
	for(j=1;j<=n;j++){if(largest<mat[i][j]){largest=mat[i][j];
	}
	} } 
	printf("%d is the largest ",largest);
	return 0;








}
