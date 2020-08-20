#include<stdio.h>

int main()
{
	int i,j,k,n;
	printf("Enter a positive integer: ");
	scanf("%d",&n);	
	
	for(i=0;i<n;i++)
	{
		printf("\t");
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(k=0;k<i;k++)
		{
			printf("#");
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		printf("\t");
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=n;k>i;k--)
		{
			printf("#");
		}
		printf("\n");
	}
	
	return 0;
}
