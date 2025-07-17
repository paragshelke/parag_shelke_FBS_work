#include<stdio.h>
void discountt(float*,float*,float*,char*);

void main()
{
	float amount,total_amount,discount;
	char s;
	
	printf("are u student : ");
	scanf("%c",&s);
	printf("enter amount of your purchases : ");
	scanf("%f", &amount);

	discountt(&amount,&total_amount,&discount,&s);
}

void discountt(float* amount,float* total_amount,float* discount,char* s)
{

	
	if(*s=='y')
	{
		if(*amount>500)
		{
			 *discount=0.20 * *amount;
		}
		else
		{
		  	 *discount=0.10 * *amount;
		}
	}
	else
	{
		if(*amount>600)
		{
			*discount=0.15 * *amount;
		}
		else
		{
			*discount=0;
		}
	}
	
		*total_amount=*amount-*discount;
		printf("Your total amount is %f ",*total_amount);
	
}
