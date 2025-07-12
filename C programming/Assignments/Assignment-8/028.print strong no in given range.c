#include<stdio.h>

int all_strong(int);

int main ()
{
		int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	all_strong(n);
}

int all_strong(int n)
{
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