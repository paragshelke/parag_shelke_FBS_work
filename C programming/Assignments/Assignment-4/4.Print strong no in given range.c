#include <stdio.h>

void main() 
{
    int n;

    printf("Enter the range n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
	{
      int  temp = i;
      int  sum = 0;
        

        while (temp > 0)
		 {
            int r = temp % 10;

           
             int fact = 1;
            for (int j = 1; j <= r; j++)
			 {
                fact = fact * j;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if (sum == i)
		 {
            printf("%d ", i);
        }
    }
}
