#include<stdio.h>

char *strncat(char *dest, const char *src, int n);

void main()
{
    char dest[20] = "hello ";
    char src[] = "world";
    char *x = strncat(dest, src, 3);
    printf("%s", x);
}

char *strncat(char *dest, const char *src, int n)
{
    int i = 0;
    int dest_len = 0;
    
    while(dest[dest_len] != '\0')
        dest_len++;
    while(i < n && src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return dest;
}
