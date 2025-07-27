#include <stdio.h>
#include <stdlib.h>

char *strdup(const char *str);

void main()
{
    char str[] = "hello world";
    char *copy = strdup(str);
    if(copy != NULL)
    {
        printf("strdup: %s\n", copy);
        free(copy);
    }
}

char *strdup(const char *str)
{
    int length = 0;
    while(str[length] != '\0')
        length++;
    char *dup = (char *)malloc(length + 1);
    if(dup == NULL)
        return NULL;
    for(int i = 0; i <= length; i++)
        dup[i] = str[i];
    return dup;
}
