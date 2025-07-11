#include <stdio.h>

int factorial();

int main() 
{
	int x=factorial();
	printf("%d",x);
	
}

int factorial()
{
	    int n = 4;
    int x = 1;
    int a = 1;
    

    while (a<=n) 
	{
        x=x*a;
        a++;
    }

    return x;
}