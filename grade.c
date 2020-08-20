#include<stdio.h>

main()
{
	float mark;
	printf("\n\tEnter marks: ");
	scanf("%f",&mark);
	
	if(mark>100 || mark<0)
		printf("\n\tINVALID MARK!!");
	else if(mark>=85)
		printf("\n\tGrade A");
	else if(mark>=70)
		printf("\n\tGrade B");
	else if(mark>=55)
		printf("\n\tGrade C");
	else if(mark>=40)
		printf("\n\tGrade D");
	else
		printf("\n\tGrade F");
}
