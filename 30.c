/* transpose of matrix */

#include <stdio.h>

int main()
{
	int m, n;
	int matrix[100][100];
	
	printf("enter order of matrix (mxn) (with space): ");
	scanf("%d %d", &m, &n);
	
	printf("enter elemnts of matrix: ");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("given matrix:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\ntranspose of matrix is:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",matrix[j][i]);
		}
		printf("\n");
	}
	return 0;
}
