// finding the sum of each row and collumn in funtion
#include<stdio.h>
int main(){
	
	int i,j,m,n,sum=0;
	
	printf("\nenter the size off array\n");
	
	scanf("%d%d",&m,&n);
	
int	mat[m][n];

	for(i=1;i<=m;i++)
	{
		
	     	for(j=1;j<=n;j++)
	     	
		           {printf("\nenter the element of %d,%d\n",i,j);
		           
		             scanf("%d",&mat[i][j]);
		
		          }
   }
		for(i=1;i<=m;i++)
		{
			
		   for(j=1;j<=n;j++)
		      {
		      	
		
		          printf("%d\t",mat[i][j]);
				}
		

printf("\n");

}

for(i=1;i<=m;i++)
{
		for(j=1;j<=n;j++)
		
		
		{
		sum=sum+mat[i][j];
		
	}
	printf("the sum of row %d is %d\n",i,sum);
	
	sum=0;
	}
	
for(i=1;i<=m;i++)
{
		for(j=1;j<=n;j++)
		{
		
		sum=sum+mat[j][i]; 
		}
		
			printf("the sum of column %d is %d\n",i,sum);
			sum =0;
			}
		
return 0; }
