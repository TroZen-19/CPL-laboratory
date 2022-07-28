#include<stdio.h>

int main()
{
	//variable declaration 
	int m,n,p,q;
	
	
	//reading the order of matrixes
	
	printf("enter the row of first matrix");
	scanf("%d",&m);
	printf("enter the column of first matrix");
	scanf("%d",&n);
	
	printf("enter the row of second matrix");
	scanf("%d",&p);
	printf("enter the column of second matrix ");
	scanf("%d",&q);
		
	if(n!=p)
	{
		printf("matrix multiplication is not possible ");
		return 1;
	}
	int a[m][n];
	int b[p][q];
	int c[m][q];
	//reading the matrix A
	
	printf("enter the elements of first matrix a ");
	for(int i=0;i<m;i++)
		{
		for (int j=0;j<n;j++)
			{
			scanf("%d", &a[i][j]);
			
			}
		}

	//reading the matrix B
	
	printf("enter the elements of first matrix b");
	for(int i=0;i<p;i++)
		{
		for (int j=0;j<q;j++)
			{
			scanf("%d", &b[i][j]);
			
			}
		}

	//performing the multiplication operation
	
		for(int i=0;i<m;i++)
		{
			for (int j=0;j<q;j++)
			{
				c[i][j]=0;
				for(int k=0;k<n;k++)
				{
					c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
				}
			}
		}
	//displaying the matrices C
		printf("the resultant matrix is\n");
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<q;j++)
			{
			printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
return 0;
}
