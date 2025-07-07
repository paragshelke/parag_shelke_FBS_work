#include <stdio.h>

void main()
 {
    int n, i, j, x;

    printf("Enter the range n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for (i = 2; i <= n; i++) 
	{ 
        j = 2;
        x = 1; 

        while (j <= i / 2)
		 {
            if (i % j == 0)
			 {
                x = 0; 
                break;
            }
            j++;
        }

        if (x == 1)
		 {
		 printf("%d\n",i);	
		 
	}
    }
}
