#include<stdio.h>

void main()
{
	int arr[3][3],sum=0;
	int *p;
	int i,j;
	
	printf("\n   Enter nine values: \n\n");
	p=&arr[0][0];
	for(i=0;i<3;i++)
	{
		//printf("  [%d] ",i+1);
		for(j=0;j<3;j++)
		{
			printf("\t");
			scanf("%d",p);
			p++;
		}
	}
	
	printf("\n   Elements of the matrix: \n\n");
	p=&arr[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t  %d",*p);
			p++;
		}
		
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
				sum+=arr[i][j];
		}
	}
	
	printf("\n   Trace: %d",sum);
	
}
