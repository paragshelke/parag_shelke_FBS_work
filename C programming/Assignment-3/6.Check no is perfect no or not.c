#include <stdio.h>

void main() 
{
    int n = 28;  
    int sum = 0;
    int i = 1;

    while(i < n)
	 {
        if(n%i == 0)
		{
            sum=sum+i;
        }
        i++;
    }

    if(sum == n)
        printf("%d is a Perfect number", n);
    else
        printf("%d is not a Perfect number", n);

    
}
