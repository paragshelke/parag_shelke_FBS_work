#include<stdio.h>

char *strncpyy(char *dest, const char *src, int n);

void main()
{
    char src[] = "hello";
    char dest[10];
    char *x = strncpyy(dest, src, 3);
    printf("%s", x);
}

char *strncpyy(char *dest, const char *src, int n)
{
    int i = 0;
    while(i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}
