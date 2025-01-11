 ok//wap to print the number in assending order
#include<stdio.h>
int main(){
	
	int j,i,m,n,temp;
	
	printf("enter the size of array\n");
	
	scanf("%d%d",&m,&n);
	
	int mat[m][n];
	
for(i=1;i<=m;i++)
{
	for(j=1;j<=n;j++)
	{printf("\nenter the element of %d,%d\n",i,j);
	
	scanf("%d",&mat[i][j]);
	
	}
}
for(i=1;i<=m;i++){
	for(j=1;j<=n;j++){printf("%d\t",mat[i][j]);
	} printf("\n");}
printf("\n");


