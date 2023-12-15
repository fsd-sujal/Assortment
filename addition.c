#include<stdio.h>

main()
{
	int r,c,i,j,a[50][50],b[50][50],t[100][100];
	
	printf("Size of Row = ");
	scanf("%d",&r);
	
	printf("Size of Column = ");
	scanf("%d",&c);
	
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
  	
  	printf("\n");
  	
	printf("Size of Row = ");
	scanf("%d",&r);
	
	printf("Size of Column = ");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
  	{
    	for(j=0;j<c;j++)
    	{
      		scanf("%d",&b[i][j]);
    	}
    	printf("\n");
  	}
  	
	for(i=0;i<r;i++)
  	{
    	for(j=0;j<c;j++)
    	{
      		printf("%d ",b[i][j]);
    	}
    	printf("\n");
  	}

	for(i=0;i<r;i++)
  	{
    	for(j=0;j<c;j++)
    	{
      		t[i][j] = a[i][j] + b[i][j];
    	}
  	}	
  	
  	printf("\nAddition Value : \n");
  	
  	for(i=0;i<r;i++)
    {
   	 for(j=0;j<c;j++)
   		{
     	 printf("%d ",t[i][j]);
 	    }
   		 printf("\n");
    }	
}