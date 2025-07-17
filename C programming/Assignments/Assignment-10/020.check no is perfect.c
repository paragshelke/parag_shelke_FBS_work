#include<stdio.h>

void isperfect(int*);

void main ()
{
		int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	isperfect(&n);
}

void isperfect(int* n)
{
	int sum = 0;
    int a = 1;

    while(a < *n)
	 {
        if(*n%a == 0)
		{
            sum=sum+a;
        }
        a++;
    }

    if(sum == *n)
        printf("%d is a Perfect number", *n);
    else
        printf("%d is not a Perfect number", *n);

	
}