#include<stdio.h>

int markss(int);

void main()
{

		int marks;
	printf("enter your marks");
	scanf("%d",&marks);
	
	int x=markss(marks);
	
		if(x==1)
	{
		printf(" DISTINCTION");
	}
	else if(x==2)
		{
		printf("FIRST CLASS");
		}
	 	else if(x==3)
			{
			printf("SECCOND CLASS");
			}	
     		else if(x==4)
				{
				printf("PASS CLASS");
				}
				 else
				{
				printf(" FAIL");
				}
	
	
	

}

int markss(int marks)
{
	
	
	if(marks>=75)
	{
	return 1;
	}
	else if(marks>=65)
		{
		return 2;
		}
	 	else if(marks>=55)
			{
			return 3;
			}	
     		else if(marks>=40)
				{
			return 4;
				}
				 else
				{
				return 5;
				}
}