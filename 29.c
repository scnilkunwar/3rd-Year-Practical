/* difference of two matrices */

#include <stdio.h>

void display(int matrix[100][100], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}


int main()
{
	int m, n;
	
	printf("enter order of matrices (mxn) (with space): ");
	scanf("%d %d", &m, &n);
	
	int matrix1[100][100], matrix2[100][100], difference[100][100];
	
	printf("enter elements of matrix1:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
	}
	
	printf("enter elements of matrix2:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}
	
	//summing
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			difference[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}
	
	printf("matrix1:\n");
	display(matrix1, m, n);
	
	printf("matrix2:\n");
	display(matrix2, m, n);
	
	printf("sum of matrix:\n");
	display(difference, m, n);
	
	return 0;
}
