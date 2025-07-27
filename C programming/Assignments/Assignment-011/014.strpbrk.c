#include <stdio.h>

char *strpbrk(const char *str, const char *accept);

void main()
{
    char str[] = "hello world";
    char accept[] = "ow";
    char *ptr = strpbrk(str, accept);
    if(ptr != NULL)
        printf("strpbrk: %c\n", *ptr);
    else
        printf("No matching character found\n");
}

char *strpbrk(const char *str, const char *accept)
{
    int i = 0, j;
    while(str[i] != '\0')
    {
        j = 0;
        while(accept[j] != '\0')
        {
            if(str[i] == accept[j])
                return (char *)&str[i];
            j++;
        }
        i++;
    }
    return NULL;
}
