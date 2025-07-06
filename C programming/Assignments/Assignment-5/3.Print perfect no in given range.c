#include <stdio.h>

void main()
 {
    int n, i, sum, j;

    printf("Enter the range n: ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 and %d are:\n", n);

    for (i = 1; i <= n; i++)
	 {
        j = 1;
        sum = 0;

        
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
            printf("%d\n", i);
        }
    }
}
