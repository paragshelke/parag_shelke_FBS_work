#include<stdio.h>
void main()
{
	int n=5;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j==1||j==5||i==1||i==5||i==j)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}