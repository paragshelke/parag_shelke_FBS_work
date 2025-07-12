#include<stdio.h>

int all_perfect(int);

int main ()
{
		int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	all_perfect(n);
}

int all_perfect(int n)
{
	for (int i = 1; i <= n; i++)
	 {
        
       int sum = 0;

        int j = 1;
        while (j < i)
		 {
            if (i % j == 0) 
			{
                sum = sum + j;
            }
            j++;
        }

        if (sum == i) 
		{
            printf("%d ", i);
        }
    }
}