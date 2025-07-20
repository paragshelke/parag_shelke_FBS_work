#include<stdio.h>

void main()
{
	int marks;
	printf("enter your marks");
	scanf("%d",&marks);
	
	if(marks>=75)
	{
		printf(" DISTINCT");
	}
	else if(marks>=65)
		{
		printf("FIRST CLASS");
		}
	 	else if(marks>=55)
			{
			printf("SECCOND CLASS");
			}	
     		else if(marks>=40)
				{
				printf("PASS CLASS");
				}
				 else
				{
				printf(" FAIL");
				}
}