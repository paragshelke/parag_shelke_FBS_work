#include<stdio.h>

int isstrong(int);

void main ()
{
		int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	int x=isstrong(n);
	
	if(x==1)
        printf("%d is a Strong number", n);
    else
        printf("%d is not a Strong number", n);

	
	
	isstrong(n);
}

int isstrong(int n)
{
	int temp = n;
    int sum = 0;

    while(n > 0) 
	{
        int r = n % 10;

        int fact = 1;
        int i = 1;
        
        while(i <= r) 
		{
            fact=fact*i;
            i++;
        }

        sum=sum+fact;
        n=n/10;
    }

    if(sum == temp)
        return 1;
    else
        return 0;

   
}