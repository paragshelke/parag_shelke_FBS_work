#include<stdio.h>
void agee(int*);

void main()
{
	int age;
	printf("Enter your age : ");
	scanf("%d",&age);
	
	agee(&age);
}

void agee(int* age)
{
		if(*age<12)
	{
		printf(" child");
	}
	else if(*age>=12&&*age<=19)
		{
		printf("teenager");
		}
		else if(*age>=20&&*age<=59)
		{
		printf(" adult");
		}
		else
		{
		printf("senior");
		}
}