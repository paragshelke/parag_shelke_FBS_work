#include <stdio.h>

void main() 
{
    int n = 12345;
    int lastdigit = n % 10;
    int firstdigit;
    while(n>0) 
	{
		firstdigit=n%10;
        n = n / 10;
        
    }
    int sum = firstdigit + lastdigit; 
    
    printf("Sum = %d",sum );
 
}
