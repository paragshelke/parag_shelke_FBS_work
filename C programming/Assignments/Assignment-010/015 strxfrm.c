#include<stdio.h>
#include<string.h>
void main()
{
	char str1[] = "xyz";
	char str2[20];
	size_t len = strxfrm(str2, str1, 20);
	printf("%zu", len);
}