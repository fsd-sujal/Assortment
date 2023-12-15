#include<stdio.h>

main()
{
	int i,j,r,c;
	
	printf("Size of Row = ");
	scanf("%d",&r);
	
	printf("Size of Column = ");
	scanf("%d",&c);	
	int a[r][c],trans[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Matrix Value :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			trans[j][i] = a[i][j];
		}
	}

	printf("Transpose Value :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",trans[i][j]);
		}
		printf("\n");
	}
}