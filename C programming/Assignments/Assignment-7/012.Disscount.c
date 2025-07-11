#include<stdio.h>

float discount();

int main()
{
	float x=discount();
	printf("%f",x);
}


float discount()
{
	float amount,total_amount,discount;
	char s;
	
	printf("are u student : ");
	scanf(" %c",&s);
	printf("\nenter amount of your purchases : ");
	scanf("%f", &amount);
	
	if(s=='y')
	{
		if(amount>500)
		{
			 discount=0.20*amount;
		}
		else
		{
		  	 discount=0.10*amount;
		}
	}
	else
	{
		if(amount>600)
		{
			discount=0.15*amount;
		}
		else
		{
			discount=0;
		}
	}
	
		total_amount=amount-discount;
	
	
	return total_amount;
}