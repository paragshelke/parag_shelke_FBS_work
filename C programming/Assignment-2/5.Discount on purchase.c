#include<stdio.h>

void main()
{
	float p;
	char s;
	
	printf("are u student : ");
	scanf("%c",&s);
	printf("enter amount of your purchases : ");
	scanf("%f", &p);
	
	if(s=='y')
	{
		if(p>500)
		{
			printf(" discount is 20%");
		}
		else
		{
			printf("discount is 10%");
		}
	}
	else
	{
		if(p>600)
		{
			printf("dicount is 15%");
		}
		else
		{
			printf("no discount");
		}
	}
	
	
}