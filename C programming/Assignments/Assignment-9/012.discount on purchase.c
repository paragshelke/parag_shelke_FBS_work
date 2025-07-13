#include<stdio.h>

float discount(float,char);

int main()
{
		float amount;
	char s;
	
	printf("are u student : ");
	scanf("%c",&s);
	printf("enter amount of your purchases : ");
	scanf("%f", &amount);
	
	int x =discount(amount,s);
	printf("bill is %d",x);
	
	discount( amount , s);
}

float discount(float amount , char s)
{
	float total_amount,discount;
	
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