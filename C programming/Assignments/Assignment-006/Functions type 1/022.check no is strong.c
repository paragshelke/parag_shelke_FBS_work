#include<stdio.h>

void isstrong();

void main()
{
	isstrong();
}

void isstrong()
{
	int n = 145;
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
        printf("%d is a Strong number", temp);
    else
        printf("%d is not a Strong number", temp);

}