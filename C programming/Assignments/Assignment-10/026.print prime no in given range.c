#include<stdio.h>

void all_prime(int*);

void main ()
{
		int n;
	printf("enter a range n ");
	scanf("%d",&n);
	
	all_prime(&n);
}

void all_prime(int* n)
{
	for (int i = 2; i <= *n; i++) 
	{ 
       int flag = 0;
		 
 		int	j = 2;
        while (j <= i / 2)
		 {
            if (i % j == 0)
			 {
                flag = 1; 
                break;
            }
            j++;
        }

        if (flag == 0)
		 {
		 printf("%d ",i);	
		 
	}
    }
	
}