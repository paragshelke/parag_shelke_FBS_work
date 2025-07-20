#include<stdio.h>

int withdraw(int);
int deposit(int);

int main()
{
	int amount;
	
	printf("Enter amount : ");
	scanf("%d",&amount);
	
	int a;
	printf("press 1 to Withdraw or press 2 to deposit : ");
	scanf("%d",&a);
	
	if(a==1)
	{
		int x=withdraw(amount);
	if(x==0)
	printf("amount withdrawn %d",amount);
	else 
	printf("cant withdraw balance is not sufficient");
		
	}
	
	if(a==2)
	{
			int x=deposit(amount);
	if(x==1)
	printf("amount deposited %d",amount);
	else
	printf("please enter amount greater than zero");
		
	}
		
}

 int withdraw(int amount)
{
	if(amount>3000)
		return 0;
	else
		return 1;
}

 int deposit(int amount)
{
	if(amount>0)
		return 1;
	else
		return 0;
}

