#include <stdio.h>
int isstrong();

void main() 
{
	int x=isstrong();
	if(x==1)
	printf("is strong");
	else
	printf("not strong");
}

int isstrong()
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
       return 1;
    else
        return 2;

   
}

