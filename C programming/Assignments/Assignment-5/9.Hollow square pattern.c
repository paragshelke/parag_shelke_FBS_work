#include<stdio.h>
void main()
{
	int n=4;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j==1||j==4||i==1||i==4)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}