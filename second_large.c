#include <stdio.h>
#include <limits.h>
 
int main()
{
	int a[50], i, n;
	int first;
	
	printf("\n Please Enter the Number of elements in an array  :  ");
	scanf("%d", &n);
	
	printf("\n Please Enter %d elements of an Array \n", n);
	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
    }
	   
	for (i = 0; i < n; i++)
	{
		if(a[i] > first)
		{
			first = a[i];
		}
	}
	printf("\n The Largest Number =  %d", first);
}