#include<stdio.h>

int ispalindrome(int);

int main ()
{
		int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	int x=ispalindrome(n);
	
	if(x==1)
        printf("%d is a Palindrome number", n);
    else
        printf("%d is not a Palindrome number", n);
	
	ispalindrome(n);
}

int ispalindrome(int n)
{
	 int temp = n;
    int r;
    int reversed = 0;

    while(n > 0) 
	{
        r = n % 10;
        reversed = reversed * 10 + r;
        n = n / 10;
    }

    if(reversed == temp)
        return 1;
    else
        return 0;

}