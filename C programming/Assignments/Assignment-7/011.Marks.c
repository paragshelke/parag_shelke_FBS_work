#include<stdio.h>

int result();

int main()
{
int x= result();
	if(x==1)
	printf("Distinct");
	else if(x==2)
	printf("first class");
	else if(x==3)
	printf("second class");
	else if(x==4)
	printf("pass class");
	else
	printf("fail");
	
	
}


 int result()
{
	int marks;
	printf("enter your marks ");
	scanf("%d",&marks);
	
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