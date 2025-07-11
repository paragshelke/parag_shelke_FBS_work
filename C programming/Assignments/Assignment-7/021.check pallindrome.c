#include <stdio.h>
 int ispalindrome();

int main()
{
	int x=ispalindrome();
	if(x==1)
	printf("is palindrome");
	else
	printf("not palindrome");
}

int ispalindrome() 
{
    int n = 121;  
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
       return 2;

    
}
