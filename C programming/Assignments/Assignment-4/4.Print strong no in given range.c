#include <stdio.h>

void main() 
{
    int n, i, num, temp, digit, sum, fact;

    printf("Enter the range n: ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are:\n", n);

    for (i = 1; i <= n; i++) 
	{
        num = i;
        sum = 0;
        temp = num;

        while (temp > 0)
		 {
            digit = temp % 10;

           
            fact = 1;
            for (int j = 1; j <= digit; j++)
			 {
                fact = fact * j;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if (sum == num)
		 {
            printf("%d\n", num);
        }
    }
}
