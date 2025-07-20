#include<stdio.h>

void print_perfect();

void main()
{
	print_perfect();
}

void print_perfect()
{
	int n ;

    printf("Enter the range n: ");
    scanf("%d", &n);

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