#include<stdio.h>

void main()
{
	int u;
	int bill;
	
	printf("enter units ");
	scanf("%d",&u);
	
	if(u<=50)
	{
		bill=u*30;
	}
	else if(u>=51&&u<=150)
	{
		bill=u*40;
	}
	else
	{
		bill=u*50;
	}
	printf("electricity bill is %d",bill);
}