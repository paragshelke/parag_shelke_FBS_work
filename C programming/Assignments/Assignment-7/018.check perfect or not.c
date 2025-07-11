#include <stdio.h>

int isperfect();

int main() 
{
	int x=isperfect();
	if(x==1)
	printf("perfect number");
	else
	printf("not perfect number");

    
}

int isperfect()
{
	    int n = 28;  
    int sum = 0;
    int a = 1;

    while(a < n)
	 {
        if(n%a == 0)
		{
            sum=sum+a;
        }
        a++;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}