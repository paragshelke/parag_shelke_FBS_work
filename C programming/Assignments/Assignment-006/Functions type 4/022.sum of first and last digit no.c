#include<stdio.h>

int sum(int);

int main ()
{
		int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	int x=sum(n);
	
	printf("sum=%d",x);
	
	
	
	sum(n);
}

int sum(int n)
{
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