#include<stdio.h>

main()
{
	int opt;
	printf("\n\tEnter a number from 1 to 5: ");
	scanf("%d",&opt);
	
	switch(opt)
		{
			case 1:printf("\n\n\tFood item: Pav Bhaji");
				   printf("\n\tPrice: Rs 59");
				   break;
			case 2:printf("\n\n\tFood item: Chole Bhature");
				   printf("\n\tPrice: Rs 39");
				   break;
			case 3:printf("\n\n\tFood item: Chowmein");
				   printf("\n\tPrice: Rs 49");
				   break;
			case 4:printf("\n\n\tFood item: Tandoori Chicken Roll");
				   printf("\n\tPrice: Rs 49");
				   break;
			case 5:printf("\n\n\tFood item: Burger Pizza");
				   printf("\n\tPrice: Rs 44");
				   break;
			default:printf("\n\n\t***********************************   Enter a number from 1 to 5!!   ***********************************");
		}
}
