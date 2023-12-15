#include<stdio.h>

int main()
{
	int r,c,i,j,sum=0;
	
	printf("Size Of Row = ");
	scanf("%d",&r);
	
	printf("Size Of Column = ");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
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
			if(i==j)
			{
				sum = sum+a[i][j];
			}
		}
	}
	printf("\nDaigonal Sum = %d",sum);
}