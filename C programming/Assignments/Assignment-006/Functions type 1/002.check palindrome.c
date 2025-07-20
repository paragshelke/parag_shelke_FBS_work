
void checkpalindrome();

void main()
{
	checkpalindrome();
}

void checkpalindrome()
{
		int num,r1, r2, r3, rev;
	int q1;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    r1 = num%10;
	q1 = num/10;
	r2 = q1%10; 
    r3 = q1/10;           

    rev = r1 * 100 + r2 * 10 + r3;  

    if(rev == num){
	
        printf("The number is a palindrome");
}
	else{
	
        printf("The number is not a palindrome");
    }
}