#include <stdio.h>

int sum();

int main() 
{
int x=sum();
printf("%d",x);
 
}

int sum()
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
    
return sum;
}
