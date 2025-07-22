#include<stdio.h>

int isperfect(int);

void main ()
{
		int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	int x=isperfect(n);
	
	if(x==1)
        printf("%d is a Perfect number", n);
    else
        printf("%d is not a Perfect number", n);
	
	isperfect(n);
}

int isperfect(int n)
{
	int sum = 0;
    int a = 1;

    while(a < n)
	 {
        if(n%a == 0)
		{
            sum=sum+a;
        }
        a++;
    }

    if(sum == n)
        return 1;
    else
    	return 0;

	
}